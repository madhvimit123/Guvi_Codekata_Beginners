#include<iostream>
#include<stack>
using namespace std;

int main()
{
   char str[30],a=0,d=0;
   cin>>str;
   for(int i=0;str[i]!='\0';i++){
       if(isalpha(str[i])!=0)
       a=1;
       else if(isdigit(str[i])!=0)
       d=1;
   }
   if(a==1 && d==1)
   cout<<"Yes";
   else
   cout<<"No";
    return 0;
}
