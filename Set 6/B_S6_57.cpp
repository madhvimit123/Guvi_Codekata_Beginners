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
        c++;
    }
    cout<<c;
    return 0;
}
