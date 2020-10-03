#include<iostream>
#include<cstring>

using namespace std;

class queue
{
	private:
		string *data;
		int front,end,elements,size;
		
	public:
		queue(){}
		
		queue(int size)
		{
			this->size=size;
			data=new string[size];
			front=end=-1;
			elements=0;
			
		}
		
		void enqueue(string item)
		{	
			if(isFull()){
			
			cout<<"The queue is full"<<endl;}
			else
			{
				end=(end+1)%size;
				data[end]=item;
				elements++;
			}
			
			
		}
		
		string dequeue()
		{
			string da;
			if(isEmpty())
			{
			cout<<"The queue is empty"<<endl;}
			else
			{
				front=(front+1)%size;
				da=data[front];
				elements--;
			}
			return da;
		}
		
		int isFull()
		{
			if(elements==size)
			return 1;
			else
			return 0;
		}
		
		int isEmpty()
		{
			if(elements<=0)
			return 1;
			else
			return 0;
		}
		
		~queue()
		{
			delete[] data;
		}
};
int main()
{
	string data,cmd;
	int size;
	cout<<"enter the size"<<endl;
	cin>>size;
	queue q(size);
	
	while(1)
	{
		cin>>cmd;
		if(cmd.compare("en")==0)
		{
			cin>>data;
			q.enqueue(data);
		}
		
		else if(cmd.compare("de")==0)
		{
			cout<<q.dequeue();
		}
		
		else if(cmd.compare("e")==0)
		{
			exit(0);
		}
	}
	return 0;
}
