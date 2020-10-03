#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

class Node
{
	private:
		string data;
		Node *next;
		
	public:
		Node(){}
		
		Node(string data)
		{
			this->data=data;
			next=NULL;
		}
		
		string getdata()
	{
		return data;
	}
	
		Node* getnext()
		{
			return next;
		}
		
		void setdata(string data)
		{
			this->data=data;
		}
		
		void setnext(Node* next)
		{
			this->next=next;
		}
};

class linklist
{
	private:
		Node* head;
		
	public:
		
		linklist()
		{
			head=NULL;
		}
		
		void insertB(string data)
		{
				Node *node=new Node(data);
				
			if(head==NULL)
			{
				head=node;
			}
			else
			{
				node->setnext(head);
				head=node;
			}
		}
		
		void insertE(string data)
		{
			Node *node=new Node(data);
			if(head==NULL)
			{
				head=node;
			}
			else
			{
				Node *temp=head;
				Node *prev=NULL;
				while(temp->getnext()!=NULL)
				{
					prev=temp;
					temp=temp->getnext();
				}
				temp->setnext(node);
			}
		}
		
		void insertMB(string data,string datas)
		{
			Node *node=new Node(data);
			Node *temp=head;
			if(head==NULL)
			{
				//node->setnext(head);
				head=node;
			}
			else
			{
				Node *prev=NULL;
				while(temp!=NULL)
				{
					prev=temp;
					if(temp->getdata().compare(datas)==0)
					break;
					temp=temp->getnext();
				}
				if(temp!=NULL)
				{
					if(prev=NULL)
					{
						node->setnext(head);
						head=node;
					}
					else
					{
						prev->setnext(node);
						node->setnext(temp);
					}
				}
				
			}
		}
		
		void print()
		{
			if(head==NULL)
			cout<<"The list is empty"<<endl;
			
			else
			{
				Node *temp=head;
				while(temp!=NULL)
				{
					cout<<temp->getdata()<<"-->";
					temp=temp->getnext();
				}
				cout<<"NULL"<<endl;
			}
			
		}
};

int main()
{
	string data,datas,cmd;
	
	linklist ll;
	
	while(1)
	{
		cin>>cmd;
		if(cmd.compare("eb")==0)
		{
			cin>>data;
			ll.insertB(data);
		}
		
		else if(cmd.compare("ee")==0)
		{
			cin>>data;
			ll.insertE(data);
		}
		
		else if(cmd.compare("mb")==0)
		{
			cin>>data>>datas;
			ll.insertMB(data,datas);
		}
		
		else if(cmd.compare("p")==0)
		{
			ll.print();
		}
		
		else if(cmd.compare("e")==0)
		exit(0);
		}	
		
		return 0;
}
