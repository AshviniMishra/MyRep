#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	long n;
	long long* arr;
	cin>>t;
	while(t--){
	    cin>>n;
	    arr = new long long[n];
	    bool swaped = false;
	    for(int i=0; i<n; i++)
	        cin>>arr[i];
	       
	   //sor the array in ascending order using insertion sort 
	    for(int i=0; i<n; i++){
	        int min = i;
	        for(int j=i+1; j<n; j++)
	        {
	            if(arr[j] < arr[min]){
	                min = j;
	                swaped = true;
	            }
	        }
	        int temp = arr[min];
	        arr[min] = arr[i];
	        arr[i] = temp;
	    }
	    
	    if( !swaped )
	        cout<<-1<<endl;
	    //now return arr[n-2]
	    else
	    cout<<arr[n-2]<<endl;
	}
	return 0;
}