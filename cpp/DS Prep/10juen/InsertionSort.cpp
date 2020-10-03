#include<iostream>
using namespace std;

void print(int *arr,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<endl;
}

void insertion(int *arr,int size)
{
	int i,key,j;
	for(i=1;i<size;i++)
	{
		key=arr[i];
		j=j-1;
		
		
		while(j>=0 && arr[j]<key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		print(arr,size);
	}
}

int main()
{
	int arr[]={97,34,12,4,67,17,11};
	int size=sizeof(arr)/sizeof(arr[0]);
	
	insertion(arr,size);
	
	cout<<endl;
	
	cout<<"The sorted array is "<<endl;
	
	print(arr,size);
	
	return 0;
}
