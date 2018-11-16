#include <iostream>
using namespace std;
int main()
{
    int h1,m1,h2,m2,h3,m3;
    cin>>h1>>m1;
    cin>>h2>>m2;
    if(h1>h2){
        if(m1<m2){
            m1+=60;
            h1-=1;
        }
        m3=m1-m2;
        h3=h1-h2;
    }
    else{
        if(m2<m1){
            m2+=60;
            h2-=1;
        }
        m3=m2-m1;
        h3=h2-h1;
    }
    cout<<h3<<" "<<m3;
    return 0;
}
