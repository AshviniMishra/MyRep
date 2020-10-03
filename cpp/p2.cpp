#include<iostream>
using namespace std;
int main()
{
	int row,i,j,num;
	
	cout<<"Enter the number of rows"<<endl;
	cin>>row;
	for(i=row;i>=0;i--)
	{
		num=row;
		for(j=0;j<=i;j++)
		{
			cout<<num<<" ";
			num--;
		}
		cout<<endl;
	}
	return 0;
}
