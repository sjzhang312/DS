#include<cstdio>
int main()
{
	void sort(int array[],int n);
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	sort(a,10);//������������ʵ��ʱ�����βΣ���������ָ����������ݵ���������Ԫ�صĵ�ַ 
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
void sort(int *array,int n){ //�����������������������Ԫ�ص�ַ����˴��ݵ�ֵ�ǵ�ַ������Ҫ���β�Ϊָ����� 
	int i,j,k,t;
	for(i=0;i<n-1;i++){
		k=i;
		for(j=i+1;j<n;j++){
			if(array[j]<array[k])
				k=j;
		}
		t=array[i];
		array[i]=array[k];
		array[k]=t;
	}
}
