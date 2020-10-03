#include<iostream>
#include<stdlib.h>

using namespace std;

class CQueue{
	private:
		string *data;
		int size;
		int front,rear,elements;
		
	public:
		CQueue(int size)
		{
			this->size=size;
			data=new string[size];
			front=rear=-1;
			elements=0;
		}
		
		bool isFull()
		{
			if(elements==size)
				return true;
			else
				return false;
		}
		
		bool isEmpty()
		{
			if(elements==0)
				return true;
			else
				return false;
		}
		
		void insert(string item)
		{
			if(isFull())
			{
				cout<<"The queue is full"<<endl;
				return;
			}
			else
			{
				rear=(rear+1)%size;
				elements++;
				data[rear]=item;
			}
		}
		
		string del()
		{
			if(isEmpty())
			{
				return "the queue is empty";
			}
			else
			{
				front=(front+1)%size;
				elements--;
				string item=data[front];
				return item;
			}
		}
		
		~CQueue()
		{
			delete[] data;
		}
};
int main()
{
	int size=6;
	CQueue q(size);
	string data,cmd;
	
	while(true)
	{
		cin>>cmd;
		if(cmd=="eq")
		{
			cin>>data;
			q.insert(data);
		}
		
		else if(cmd=="dq")
		{
			cout<<q.del();
			cout<<endl;
		}
		else if(cmd=="e")
		{
			exit(0);
		}
	}
	
	return 0;
}
