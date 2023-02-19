#include<cstdio>
int main()
{
	void sort(int array[],int n);
	int a[10],i;
	for(i=0;i<10;i++)
		scanf("%d",a+i);
	sort(a,10);//数组名作函数实参时，向形参（数组名或指针变量）传递的是数组首元素的地址 
	for(i=0;i<10;i++)
		printf("%d ",a[i]);
	return 0;
}
void sort(int *array,int n){ //由于数组名代表的是数组首元素地址，因此传递的值是地址，所以要求形参为指针变量 
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
