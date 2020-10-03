#include<iostream>
#include<stdio.h>
using namespace std;

int binarysearch(int *arr,int size,int data)
{
	int low=1;
	int high=size;
	int mid;
	while(low<=size)
	{
		mid=low + (high-low)/2;
		if(arr[mid]==data)
		return mid;
		
		else if(arr[mid]<data)
		low=mid+1;
		else
			high = mid -1;
	}
	
	return -1;
}

void rev(int *arr,int i)
{
	if(i==10)
		return;
	rev(arr,i++);
	cout<<arr[i]<<" ";
}

int main()
{
    int size=10;
	int arr[size];
	int data;
	
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	cout<<"entr the elements of the array"<<endl;
	for(int i=0;i<size;i++)
	{
		cin>>arr[i];
		}	
		
	cout<<"The enter array is "<<endl;
	
	for(int i=0;i<size;i++)
	{
		cout<<arr[i]<<"\t";
	}
	
	cout<<endl;
	
	cout<<"enter the data to be searched"<<endl;
	cin>>data;
	int mid=binarysearch(arr,size,data);
	
	if(mid==-1)
		cout<<"The given element was not found in the array"<<endl;
		
	else
		cout<<"The given element was found at "<<mid+1<<" position"<<endl;
		
	cout<<"The reverse of the given array is"<<endl;
	rev(arr,0);
}
