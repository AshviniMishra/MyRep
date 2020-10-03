#include<iostream>
#include<cstring>
using namespace std;

class stack
{
	private:
		int size;
		int top;
		string *item;
		
	public:
		stack(){};
			
		stack(int size)
		{
			this->size=size;
			item=new string[size];
			top=-1;
					}
	
		void push(string data)
		{
			if(top==size-1)
			cout<<"The stack is full"<<endl;
			
			
			top++;
			item[top]=data;
			}	
			
		string pop()
		{
			if(top==-1)
			cout<<"The stack is empty"<<endl;
			string data;
			data = item[top];
			top--;
			return data;
			
					}
		
};

int main()
{
	string data;
	int size;
	string ch;
	cout<<"Enter the size of the stack"<<endl;
	cin>>size;
	
	stack s1(size);
	
	while(1)
	{
		cin>>ch;
		 
		 if(ch.compare("e")==0)
		 exit(0);
		 
		 if(ch.compare("pu")==0)
		 {
		 cin>>data;
		 s1.push(data);
	}
	
		if(ch.compare("po")==0)
		{
			cout<<s1.pop();
		}
	}
	
	return 0;
}
