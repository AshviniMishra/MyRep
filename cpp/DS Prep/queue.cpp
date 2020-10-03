#include<iostream>
using namespace std;
class queue
{
	private:
		string *item;
		int front,rear;
		int size;
	public:
		queue(int size)
		{
			this->size=size;
			item=new string[size];
			front=rear=0;
		}
		
		void enquque(string data)
		{
			if(isFull())
			{
				cout<<"The queue is full!";
				return;
			}
			else
			{
				item[rear]=data;
				rear++;
			}
			
		}
		
		string dequeue()
		{
			string d;
			if(isEmpty())
			{
				cout<<"The queue is empty";
				return "null";
			}
			else
			{
				d=item[front];
				front++;
			}
			return d;
		}
		
		bool isFull()
		{
			if(rear==size-1)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isEmpty()
		{
			if(front==rear)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
};
int main()
{
	string data,cmd;
	int size;
	cout<<"Enter the size";
	cin>>size;
	queue q(size);
	while(true)
	{
		cin>>cmd;
		if(cmd=="en")
		{
			cin>>data;
			q.enquque(data);
		}
		else if(cmd=="de")
		{
			cout<<q.dequeue();
		}
		else if(cmd=="e")
		{
			exit(0);
		}
		else
		{
			cout<<"Pleae enter correct choice.";
			
		}
	}
	return 0;
}
