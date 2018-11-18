#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
  int a=1,b=1,c,n;
  cin>>n;
  cout<<a<<" "<<b<<" ";
  n-=2;
  while(n>0){
      c=a+b;
      a=b;
      b=c;
      cout<<c<<" ";
      n--;
  }
  
  return 0;
}
