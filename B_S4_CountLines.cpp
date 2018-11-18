#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    gets(str);
    int i,c=1;
    for(i=0;i<strlen(str);i++){
        if(str[i]=='.')
            c++;
    }
    cout<<c;
    return 0;
}
