int countSN=0;//���ڱ�ʾ�����򱱵���������
int countNS=0;
semaphore mutexSN=1;//���ڱ���countSN
semaphore mutexNS=1;
semaphore bridge=1;
semaphore s1=1,s2=0;
StoN(){
	while(1){
		P(mutexSN);
			countSN++;
		V(mutexSN);
		
		P(countNS);
		if(countNS==0){//�������û�� 
			P(bridge);
			ͨ��;
			countSN--;
			V(bridge);	
		}else{//�����г�
			P(S1);//���ô˷���ͨ��
			P(bridge);
			ͨ��
			countSN--;
			v(bridge);
			v(S2); 
		}
		v(countNS); 
	}
} 
