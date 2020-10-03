#include<iostream>
using namespace std;

void printArray(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubblesort(int *arr,int size)
{
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<size-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(&arr[j],&arr[j+1]);
				printArray(arr,size);
				cout<<endl;
			}
		}
	}
}



int main()
{
	int arr[]={97,34,12,4,67,17,11};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	bubblesort(arr,size);
	
	cout<<endl;
	
	cout<<"The sorted array is "<<endl;
	
	printArray(arr,size);
	
	return 0;
}
