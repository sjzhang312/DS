#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string a="1234567";
    string b="1234567";
    char str[14]={"0123456789JQK"};
    int temp=a[6]+b[1];
    cout<<temp<<endl;
    cout<<str[temp];
    return 0;
}
