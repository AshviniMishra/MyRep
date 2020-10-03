#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

class stack
{
	private:
			string *item;
			int top;
			int size;
	public:
			stack(){}
			stack(int size)
			{	this->size=size;
				item =new string[size];
				top=-1;
			}
			
			void push(string data)
			{
				if(isFull())
					cout<<"The stack is full"<<endl;
				else
				{
					top++;
					item[top]=data;
				}
			}
			
			string pop()
			{
				string data;
				if(isEmpty())
					cout<<"The stack is empty"<<endl;
				else
				{
					//top--;
					 data=item[top];
					top--;
				}
				return data;
			}
			
			int isFull()
			{
				if(top==size-1)
					return 1;
				else
					return 0;
			}
			
			int isEmpty()
			{
				if(top<0)
					return 1;
				else 
					return 0;
			}
			
			/*~stack()
			{
				delete[] item;
			}*/
};

int main()
{
	string data;
	int size;
	cout<<"enter size"<<endl;
	cin>>size;
	stack s(size);
	string cmd;
	while(1)
	{
		cin>>cmd;
		if(cmd.compare("pu")==0||cmd.compare("p")==0)
		{
			cin>>data;
			s.push(data);
		}
		
		else if(cmd.compare("po")==0)
			cout<<s.pop()<<endl;
		
		else if(cmd.compare("e")==0)
			exit(0);
	}
	
	return 0;
}
