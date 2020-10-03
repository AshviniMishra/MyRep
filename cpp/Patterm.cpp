#include<iostream>
using namespace std;
int main()
{
	int row,i,j,k;
	cout<<"Enter the number of rows"<<endl;
	cin>>row;
	for(i=0;i<row;i++)
	{
		for(k=0;k<row-i-1;k++)
		{
			cout<<" ";
		}
		for(j=0;j<=i;j++)
		{
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
