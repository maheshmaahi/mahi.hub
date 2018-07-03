#include<iostream>
using namespace std;
int sumdigits(int);
int main()
{
	int a;
	cout<<"enter the number:"<<endl;
	cin>>a;
	int s=sumdigits(a);
	cout<<s;
}
int sumdigits(int k)
{
	if(k==0)
	return 0;
	else
	return (k%10 + sumdigits(k/10));
}
