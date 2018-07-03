#include<iostream>
using namespace std;
int sum(int);
int main()
{
	int n,r;
	cout<<"enter the number:"<<endl;
	cin>>n;
	r=sum(n);
	cout<<r;
}
int sum(int x)
{
	if(x==0)
	return 0;
	else 
	return (x+sum(x-1));
}
