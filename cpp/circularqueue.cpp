#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

class cqueue
{
	private:
		int front,end;
		int size;
		string *item;
		int element;
		
	public:
		cqueue(){};
		
		cqueue(int size)
		{
			this->size=size;
			item = new string[size];
			front=end=-1;
			element=0;
			
		}
		
		void enqueue(string data)
		{
			if(isFull())
			{
			cout<<"The queue is full"<<endl;
		    }
			else
			{
				end=(end+1)%size;
				element++;
				item[end]=data;
			}
			
			
		string dequeue()
		{
			if(isEmpty())
			{
				cout<<"The queue is empty"<<endl;
				return "null";
			}
			
			else
			{
				front=(front+1)%size;
				elements--;
				return item[front];
			}
		}
		
		int isFull()
		{
			if(element==size)
			{
				return 1;
			}
			
			else
			
			return 0;
		}
		
		
		int isEmpty()
		{
			if(element==0)
			{
				front=end=-1;
				return 1;
			}
			
			else
			{
				return 0;
			}
		}
		
};


int main()
{
	string cmd;
	string data;
	int size;
	
	cout<<"Enter the size of the queue"<<endl;
	cin>>size;
	cqueue q(size);
	
	while(1)
	{
		cin>>cmd;
		
		if( cmd.compare("exit") == 0 || cmd.compare("e") == 0 ){
			exit(0);
		}
		if( cmd.compare("enqueu") == 0 || cmd.compare("en") == 0 ){
			cin>>data;
			q.enqueue(data);
		}
		if( cmd.compare("dequeue") == 0 || cmd.compare("de") == 0 ){
			cout<<q.dequeue()<<endl;
		}
	}

return 0;
}


