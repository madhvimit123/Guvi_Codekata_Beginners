#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int h,m;
    h=n/60;
    m=n-h*60;
    cout<<h<<" "<<m;
    return 0;
}
