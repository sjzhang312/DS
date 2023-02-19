#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
#define max 1010

typedef struct{
	double weight;
	double value;
	double price;
}yuebing; 
yuebing bing[max];
bool compare(yuebing a,yuebing b){
	return a.price>b.price;
}
int main(){
	
	int N,D;
	cin>>N>>D;
	for(int i=0;i<N;i++){
		cin>>bing[i].weight;
	}
	for(int i=0;i<N;i++){
		cin>>bing[i].value;
		bing[i].price=bing[i].value/bing[i].weight;
	}
	sort(bing,bing+N,compare);
	
	double earn=0.0;
	int j=0;
	while(D>0&&j<N){
		if(bing[j].weight<=D){
			D-=bing[j].weight;
			earn+=bing[j].value;
			j++;
		}
		else {
			earn+=bing[j].price*D;
			D=0;
		}
	}
	printf("%.2f",earn);
}
