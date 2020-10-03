#include<iostream>
#include<stdlib.h>
using namespace std;

class Queue{
	private:
		string *data;
		int size;
		int front,rear;
		
	public:
		Queue(int size)
		{
			this->size=size;
			data=new string[size];
			front=rear=0;
		}
		
		void enqueue(string item)
		{
			if(rear==size)
			{
				cout<<"the queue is full"<<endl;
				return;
			}
			data[rear]=item;
			rear++;
		}
		
		string dequeue()
		{
			if(front==rear)
			{
				return "the queue is empty";
			}
			string item=data[front];
			front++;
			return item;
		}
};

int main()
{
	int size=6;
	Queue q(size);
	string data,cmd;
	
	while(true)
	{
		cin>>cmd;
		if(cmd=="eq")
		{
			cin>>data;
			q.enqueue(data);
		}
		
		else if(cmd=="dq")
		{
			cout<<q.dequeue();
			cout<<endl;
		}
		else if(cmd=="e")
		{
			exit(0);
		}
	}
	
	return 0;
}
