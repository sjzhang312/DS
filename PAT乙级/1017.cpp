#include <iostream>
#include <string>
using namespace std;

int main()
{

    string A;
    int B;
    cin>>A>>B;
    int temp=0,guard=0;
    for(int i=0;i<A.length();++i){
        temp=temp*10+A[i]-48;
        if(temp>=B){
            cout<<temp/B;
            guard=1;
        }
        else if(guard) cout<<1;
        temp=temp%B;
    }
    if(guard==0) cout<<0;
    cout<<" "<<temp<<endl;

    return 0;

 }
