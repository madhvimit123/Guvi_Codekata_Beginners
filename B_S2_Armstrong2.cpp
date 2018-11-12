#include<iostream>
using namespace std;
int main(){
    int r,s=0,n,m,j;
    cin>>n>>m;
    for(int i=n+1;i<m;i++){
        j=i;
        s=0;
    while(j>0){
        r=j%10;
        s+=r*r*r;
        j=j/10;
    }
    if(i==s)
    cout<<i<<" ";
    }
    return 0;
}
