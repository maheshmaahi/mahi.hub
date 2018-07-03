#include<iostream>
using namespace std;
int main()
{
	int A[10],*p,n,i;
	cout<<"enter the size:"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cout<<"enter the number:"<<endl;
		cin>>A[i];
	}
	p=&A[0];
	for(int i=0;i<n;i++)
	{
		cout<<" "<<*(p+i);
	}
	return 0;
}
