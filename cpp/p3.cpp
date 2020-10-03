#include<iostream>
using namespace std;
int main()
{
	int row,i,j,k,l,num=0,num2=2;
	
	cout<<"Enter the number of rows"<<endl;
	cin>>row;
	for(i=0;i<row;i++)
	{
		for(k=1;k<row-i;k++)
		{
			cout<<" ";
		}
		num+=1;
		for(j=0;j<=i;j++)
		{
			cout<<num<<"";
		}
		num2++;
		for(l=2;l<i+2-1;l++)
		{
			cout<<num2;
		}
		cout<<endl;
	}
	return 0;
}
