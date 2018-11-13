#include <iostream>
using namespace std;
int main()
{
    int n,i,f=1;
    cin>>n;
    for(i=n;i>=1;i--)
    f*=i;
    cout<<f;

    return 0;
}
