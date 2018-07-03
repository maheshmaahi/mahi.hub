#include<iostream>
using namespace std;
int main()
{
	int A[5],B[5],C[5];
	for(int i=0;i<=4;i++)
	{
		cout<<"enter the elements:"<<" ";
		cin>>A[i];
	}
	cout<<endl;
	for(int j=0;j<=4;j++)
	{
		cout<<"enter the elements:"<<" ";
		cin>>B[j];
	}
	cout<<endl;
	for(int k=0;k<=4;k++)
	{
		C[k]=A[k];
	}
	cout<<endl;
	for(int m=0;m<=4;m++)
	{
		A[m]=B[m];
		cout<<" "<<A[m];
	}
	cout<<endl;
	for(int n=0;n<=4;n++)
	{
		B[n]=C[n];
		cout<<" "<<B[n];
	}
	cout<<endl;
	return 0;
}
