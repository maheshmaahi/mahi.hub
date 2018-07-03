#include<iostream>
using namespace std;
int main()
{
	int A[5],g;
	for(int i=0;i<=4;i++)
	{
		cout<<"enter the elements:"<<endl;
		cin>>A[i];
	}
	cout<<endl;
	g=A[0];
	for(int i=1;i<=4;i++)
	{
		if(g>A[i])
		{
			g=A[i];
		}
	}
	cout<<"the smallest element:"<<g<<endl;
	return 0;
}
  
  
