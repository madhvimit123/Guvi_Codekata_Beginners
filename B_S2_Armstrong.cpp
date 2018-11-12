#include<iostream>
using namespace std;
int main(){
    int r,s=0,n,m;
    cin>>n;
    m=n;
    while(m>0){
        r=m%10;
        s+=r*r*r;
        m=m/10;
    }
    if(n==s)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
