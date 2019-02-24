#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,k,a[20],c=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++){
        if(a[i]==k)
        {c++;
        break;}
    }
    if(c>0)
    cout<<"Yes";
    else cout<<"No";
    return 0;
}
