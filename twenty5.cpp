#include<iostream>
using namespace std;
int main()
{
	int i=0;
	l1 : cout<<i<<endl;
	i=i+2;
	if(i<=20)
	{
		goto l1;
	}
	return 0;
}
