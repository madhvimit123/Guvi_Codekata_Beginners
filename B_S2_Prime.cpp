#include<iostream>
using namespace std;
int main(){
    int n,prime=true;
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            prime=false;
            break;
        }
    }
    if(prime)
    cout<<"yes";
    else
    cout<<"no";
    return 0;
}
