#include <iostream>
#include<algorithm>
#include<string.h>
using namespace std; 
int main()
{
    
    char str1[100],str2[100];
    cin>>str1;
    cin>>str2;
    int n=strlen(str1);
    int n2=strlen(str2);
    int j=0;
    for(int i=n;i<n+n2&&j<n2;i++,j++)
    {
        str1[i]=str2[j];
    }
    cout<<str1;

    return 0;
}
