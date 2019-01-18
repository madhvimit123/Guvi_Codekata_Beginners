#include <iostream>
#include<algorithm>
using namespace std; 
int main()
{
    
    char str1[100],str2[100];
    cin>>str1;
    cin>>str2;
    if(str1==str2)
    cout<<str2;
    else if(str1>str2)
    cout<<str1;
    else
    cout<<str2;

    return 0;
}
