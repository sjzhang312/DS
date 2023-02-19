
#include<iostream> 
#include<string> 
using namespace std; 
int main() { 
  string s; 
  cin >> s; 
  while (cin >> s) { 
    if (s[2] == 'T') 
    cout<<s[0] - 'A' + 1; 
  } 
  return 0; 
} 
