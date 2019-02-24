#include<iostream>
#include<stack>
using namespace std;

int main()
{
    int n,r;
    cin>>n;
    std::stack<int> s;
    while(n>0){
        r=n%10;
        n/=10;
        s.push(r);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
