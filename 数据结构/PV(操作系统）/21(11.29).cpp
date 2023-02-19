Semophere bridge=1;
Semophere mutexNS=1,mutexSN=1;//用于保护countNS,countSN 
int countNS=0,countSN=0; 
Semophere s1=1,s2=0;//用于交替通过 
StoN(){
	while(1){
		P(mutexSN);
		countSN++;//来车了
		
		if(countNS==0){//对面无车,则直接通过
			P(bridge);
			通过
			countSN--;
			V(bridge); 
		}
		else{//对面有车，则依次通过 
			P(s1);//先让自己通过
			P(bridge);
			通过
			countSN--;//该方向车辆减一 
			V(bridge);
			V(s2); 
		}
		V(mutexSN); 
	}
}
NtoS(){
	while(1){
		P(mutexNS);
		countNS++;//来车了
		if(countSN==0){//对面无车,则直接通过
			P(bridge);
			通过
			countNS--;
			V(bridge); 
		}
		else{//对面有车，则依次通过 
			P(s2);//先让自己通过
			P(bridge);
			通过
			countNS--;
			V(bridge);
			V(s1); 
		}
		V(mutexNS);
	}
}
