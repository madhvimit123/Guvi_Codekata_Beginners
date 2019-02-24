#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int n;
	cin>>n;
	if(ceil(log2(n))== floor(log2(n)))
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}

}
