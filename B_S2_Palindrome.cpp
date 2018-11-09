#include<iostream>
using namespace std;
int main(){
    int n,m,r,s=0;
    cin>>n;
    m=n;
    while(m>0){
        r=m%10;
        s=s*10+r;
        m=m/10;
    }
    if(s==n)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
