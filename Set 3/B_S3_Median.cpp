#include <iostream>
#include<algorithm>
using namespace std;
int main() 
{
  int n,a[50],s,i;
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  sort(a,a+n);
  int m;
  if(n%2!=0)
    m=(n+1)/2;
  else
    m=n/2;
  cout<<a[m-1];
  return 0;
}
