#include<iostream>
#include<cstring>
using namespace std;

class queue
{
	int size;
	int front,rear;
	string item;
	
	public:
		queue(){};
		
		queue(int s)
		{
			size=s;
			item=new string[size];
			front=rear=0;
		}
		
		void en(string data)
		{
			if(rear==size-1)
			cout<<"queue is full";
			
			item[rear]=data;
			rear++;
		}
		
		
}
