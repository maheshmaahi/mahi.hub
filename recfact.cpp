#include<iostream>
using namespace std;
int fact(int);
int main()
{
	int n,f;
	cout<<"enter no"<<endl;
	cin>>n;
	f=fact(n);
	cout<<f;
}
int fact(int x)
{
	if(x==0)
	return 1;
	else 
	return x*fact(x-1);
}
