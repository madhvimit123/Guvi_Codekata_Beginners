#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
    
    int n,c=0,r;
    cin>>n;
    while(n>0){
        c++;
        n=n/10;
    }
    cout<<c;
    return 0;
}
