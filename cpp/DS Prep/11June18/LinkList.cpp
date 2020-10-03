#include<iostream>
#include<stdlib.h>

using namespace std;

class Node{
	private:
		string data;
		Node *next;
		
	public:
		Node(string data)
		{
			this->data=data;
		}
		
		void setData(string data)
		{
			this->data=data;
		}
		
		void setNext(Node *next)
		{
			this->next=next;
		}
		
		string getData()
		{
			return this->data;
		}
		
		Node *getNext()
		{
			return this->next;
		}
};

class LinkList{
	private:
		Node *head;
		
	public:
		LinkList()
		{
			this->head=NULL;
		}
		
		void insertB(string data)
		{
			Node *node = new Node(data);
			if(head==NULL)
			{
				head=node;
			}
			else
			{
				node->setNext(head);
				head=node;
			}
		}
		
		void insertE(string data)
		{
			Node *node = new Node(data);
			
			if(head==NULL)
			{
				head=node;
			}
			else
			{
				Node *temp=head;
				while(temp->getNext()!=NULL)
				{
					temp=temp->getNext();
				}
				temp->setNext(node);
			}
		}
		
		void insertMA(string data,string datas)
		{
			Node *node = new Node(data);
			if(head=NULL)
			{
				head=node;
			}
			else
			{
				bool flag=false;
				Node *temp=head;
				while(temp!=NULL)
				{
					if(temp->getData()==datas)
					{
						flag=true;
						break;
					}
				}
				if(flag==true)
				{
					node->setNext(temp->getNext());
					temp->setNext(node);
				}
				else
				{
					cout<<"The data being searched was not found"<<endl;
					return;
				}
			}
		}
		
		void insertMB(string data,string datas)
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
				bool flag=false;
				while(temp!=NULL)
				{
					prev=temp;
					if(temp->getData()==datas)
					{
						flag=true;
						break;
					}
				}
				if(flag==true)
				{
					node->setNext(temp);
					prev->setNext(node);
				}
				else
				{
					cout<<"The item being searched was not found"<<endl;
					return;
				}
			}
		}
		
		string deleteB()
		{
			if(head==NULL)
			{
				//cout<<"The list is empty"<<endl;
				return "The list is empty";
			}
			else
			{
				Node *temp=head;
				string item=head->getData();
				head=head->getNext();
				//delete temp;
				return item;
			}
		}
		
		string deleteE()
		{
			if(head==NULL)
			{
				//cout<<"The list is empty"<<endl;
				return "the list is empty"; 
			}
			else
			{
				Node *temp=head;
				Node *prev=NULL;
				while(temp->getNext()!=NULL)
				{
					prev=temp;
					temp=temp->getNext();
				}
				if(prev==NULL)
				{
					string item=temp->getData();
					head=NULL;
					//delete temp;
					return item;
				}
				else
				{
					string item=temp->getData();
					prev->setNext(NULL);
					//delete temp;
					return item;
				}
			}
		}
		
		void print()
		{
			if(head==NULL)
			{
				cout<<"The lsit is emtpy"<<endl;
				return;
			}
			else
			{
				Node *temp=head;
				while(temp!=NULL)
				{
					cout<<temp->getData()<<"-->";
					temp=temp->getNext();
				}
				cout<<"null"<<endl;
			}
		}
		
		~LinkList()
		{
		}
};

int main()
{
	string data,datas,cmd;
	LinkList ll;
	while(true)
	{
		cin>>cmd;
		
		if(cmd=="ib")
		{
			cin>>data;
			ll.insertB(data);
		}
		else if(cmd=="ie")
		{
			cin>>data;
			ll.insertE(data);
		}
		
		else if(cmd=="db")
			{
				cout<<ll.deleteB();
			}
			else if(cmd=="de")
				{
					cout<<ll.deleteE();
				}
				
			else if(cmd=="ma")
			{
				cin>>data>>datas;
				ll.insertMA(data,datas);
			}
			
			else if(cmd=="mb")
			{
				cin>>data>>datas;
				ll.insertMB(data,datas);
			}
		else if(cmd=="p")
		{
			ll.print();
		}
		else if(cmd=="e")
		{
			exit(0);
		}
	}
	return 0;	
}

