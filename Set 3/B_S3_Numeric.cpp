#include <iostream>
#include<string>
using namespace std;
bool isNumber(string n){
  for(int i=0;i<n.length();i++)
  {
    if(isdigit(n[i])==false && n[i]!='.')
    return false;
  }
  return true;
}
int main() {
  string n;
  cin>>n;
  if(isNumber(n)==true){
    cout<<"Yes";
  }
  else cout<<"No";
  return 0;
}
