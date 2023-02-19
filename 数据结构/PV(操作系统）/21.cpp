int countSN=0;//用于表示从南向北的汽车数量
int countNS=0;
semaphore mutexSN=1;//用于保护countSN
semaphore mutexNS=1;
semaphore bridge=1;
semaphore s1=1,s2=0;
StoN(){
	while(1){
		P(mutexSN);
			countSN++;
		V(mutexSN);
		
		P(countNS);
		if(countNS==0){//如果对面没车 
			P(bridge);
			通过;
			countSN--;
			V(bridge);	
		}else{//对面有车
			P(S1);//先让此方向通车
			P(bridge);
			通过
			countSN--;
			v(bridge);
			v(S2); 
		}
		v(countNS); 
	}
} 
