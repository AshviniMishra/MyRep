#include<iostream>
using namespace std;

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void printArray(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void Selection(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		int index=i;
		for(int j=i+1;j<size;j++)
		{
			if(arr[j]<arr[index])
			{
				index=j;
			}
		}
		swap(&arr[i],&arr[index]);
		printArray(arr,size);
	}
}

int main()
{
	int arr[]={8,23,89,12,34,21,90};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	Selection(arr,size);
	cout<<"The sorted array is "<<endl;
	
	printArray(arr,size);
	return 0;
}
