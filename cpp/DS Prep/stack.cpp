#include<iostream>
using namespace std;

class Stack
{
	private:
		int size;
		int top;
		int *item;
		
	public:
		Stack(int size)
		{
			this->size=size;
			item=new int[size];
			top=-1;
		}
		
		void Push(int data)
		{	if(isFull())
			{
				cout<<"The stack is full, bhag jaa bhosdike!!";
			}
			else
			{
				top++;
				item[top]=data;
			}
		}
		
		int Pop()
		{
			int d;
			if(isEmpty())
			{
				cout<<"The stack is empty!!";
				return 0;
			}
			else
			{
				 d=item[top];
				top--;
			}
			return d;
		}
		
		bool isFull()
		{
			if(top==size-1)
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
			if(top<0)
			{
				return true;
			}
			
			else
			{
				return false;
			}
		}
		
		~Stack()
		{
			delete item;
		}
};

int main()
{
	int size,data;
	string cmd;
	cout<<"Enter the size of the stack";
	cin>>size;
	Stack s(size);
	while(true)
	{
		cin>>cmd;
		if(cmd=="pu"|cmd=="push")
		{
			cin>>data;
			s.Push(data);
			//cout<<endl;
		}
		
		if(cmd=="po"||cmd=="pop")
		{
			cout<<s.Pop();
			cout<<endl;
		}
		
		if(cmd=="e"||cmd=="exit")
		{
			exit(0);
		}
	}
	return 0;
}
