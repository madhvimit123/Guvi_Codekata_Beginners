#include <iostream>
#include<string.h>
using namespace std;
int main()
{
    char str[50];
    gets(str);
    int i,c=0;
    for(i=0;i<strlen(str);i++){
        if(!isdigit(str[i]) && !isalpha(str[i]) && str[i]!=' ')
            c++;
    }
    cout<<c;
    return 0;
}
