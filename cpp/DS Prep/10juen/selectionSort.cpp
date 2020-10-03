#include<iostream>
using namespace std;

void swap(int *x,int *y)
{
	cout<<"Swap called"<<endl;
	int temp=*x;
	*x=*y;
	*y=temp;
}

void selection(int *arr,int size)
{
	cout<<"Mehtod called "<<endl;
	for(int i=0;i<size-1;i++)
	{
		cout<<"inside outer for "<<endl;
		int min_ind=i;
		for(int j=i+1;i<size;j++)
		{
			cout<<"Inside the inner for "<<endl;
			if(arr[j]<arr[min_ind])
			min_ind=j;
		}
		swap(&arr[i],&arr[min_ind]);
	}
}

int main()
{
		int arr[] = {64, 25, 12, 22, 11};
	int n = sizeof(arr)/sizeof(arr[0]);
	selection(arr, n);
	cout<<"The sorted array is "<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	
	cout<<endl;
	return 0;
}
