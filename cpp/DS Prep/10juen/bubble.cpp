#include<iostream>
using namespace std;

void bubble(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	int arr[10];
	
	cout<<"Enter the elements of the array"<<endl;
	
	for(int i=0;i<10;i++)
	{
		cin>>arr[i];
		}	
		
	cout<<"THe entered array is "<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	
	bubble(arr,10);
	
	cout<<"The sorted array is "<<endl;
	
	for(int i=0;i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
}
