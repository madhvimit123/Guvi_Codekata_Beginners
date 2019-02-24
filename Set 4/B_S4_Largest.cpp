#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
  int n,a[10],s,i;
  for(i=0;i<10;i++)
  cin>>a[i];
  sort(a,a+10);
  cout<<a[9];
  return 0;
}
