#include<iostream>
using namespace std;
int main(){
    int n,m,prime=true;
    cin>>n>>m;
    for(int j=n+1;j<m;j++){
        prime=true;
    for(int i=2;i<j;i++){
        if(j%i==0){
            prime=false;
            break;
        }
    }
    if(prime)
    cout<<j<<" ";
    }
    return 0;
}
