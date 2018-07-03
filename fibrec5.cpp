#include<iostream>
using namespace std;
int fib(int);
int main()
{
	int n,s;
	cout<<"enter no"<<endl;
	cin>>n;
	s=fib(n);
	cout<<s;
}
int fib(int x)
{
	if(x==0)
	return 0;
	else if(x==1)
	return 1;
	else 
	return (fib(x-1)+fib(x-2));
}
