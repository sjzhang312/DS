Semophere bridge=1;
Semophere mutexNS=1,mutexSN=1;//���ڱ���countNS,countSN 
int countNS=0,countSN=0; 
Semophere s1=1,s2=0;//���ڽ���ͨ�� 
StoN(){
	while(1){
		P(mutexSN);
		countSN++;//������
		
		if(countNS==0){//�����޳�,��ֱ��ͨ��
			P(bridge);
			ͨ��
			countSN--;
			V(bridge); 
		}
		else{//�����г���������ͨ�� 
			P(s1);//�����Լ�ͨ��
			P(bridge);
			ͨ��
			countSN--;//�÷�������һ 
			V(bridge);
			V(s2); 
		}
		V(mutexSN); 
	}
}
NtoS(){
	while(1){
		P(mutexNS);
		countNS++;//������
		if(countSN==0){//�����޳�,��ֱ��ͨ��
			P(bridge);
			ͨ��
			countNS--;
			V(bridge); 
		}
		else{//�����г���������ͨ�� 
			P(s2);//�����Լ�ͨ��
			P(bridge);
			ͨ��
			countNS--;
			V(bridge);
			V(s1); 
		}
		V(mutexNS);
	}
}
