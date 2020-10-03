#include<iostream>
#include<cstring>
#include<stdlib.h>

using namespace std;

class Node
{
	private:
		string data;
		Node *next;
		Node *prev;
	public:
		Node(){
		}
		
		Node(string data)
		{
			this->data=data;
			next=NULL;
			prev=NULL;
		}
		
		string getdata()
		{
			return data;
			}	
			
		Node *getnext()
		{
			return next;
		}
		
		Node *getprev()
		{
			return prev;
		}
		
		void setdata(string data)
		{
			this->data=data;
		}
		
		void setnext(Node* next)
		{
			this->next=next;
		}
		
		void setprev(Node *prev)
		{
			this->prev=prev;
		}
		
		~Node()
		{
		}
};

class linklist
{
	private:
		Node *head;
		
		int isempty()
		{
			if(head==NULL)
			return 1;
			else
			return 0;
		}
	public:
		linklist()
		{
			head=NULL;
		}
		
		
		
		void insertB(string data)
		{
			Node *node=new Node(data);
			if(isempty())
			{
				head=node;
			}
			else
			{
				head->setprev(node);
				node->setnext(head);
				head=node;
			}
		}
		
		void insertE(string data)
		{
			Node *node=new Node(data);
			if(isempty())
			{
				head=node;
			}
			
			else
			{
				Node  *temp=head;
				while(temp->getnext()!=NULL)
				{
					temp=temp->getnext();
				}
				temp->setnext(node);
				node->setprev(temp);
			}
		}
		
		void deleteE(string data)
		{
			if(isempty())
			{
				cout<<"The list is empty"<<endl;
				return;
			}
			else
			{
				Node *temp=head;
				while(temp!=NULL)
				{
					if(temp->getdata()==data)
					break;
					temp=temp->getnext();
				}
				if(temp==NULL)
				{
				cout<<"data not found"<<endl;
					return;
			}
				else if(temp->getprev()==NULL)
				{
					head=temp->getnext();
					delete temp;
				}
				else if(temp->getnext()==NULL)
				{
					temp->getprev()->setnext(NULL);
					delete temp;
				}
				else
				{
				
				temp->getprev()->setnext(temp->getnext());
				temp->getnext()->setprev(temp->getprev());}
				delete temp;
			}
			
		
		}
		
		void deleteB()
		{
			Node *temp=head;
			head=head->getnext();
			head->setprev(NULL);
			delete temp;
		}
		
		void deleteend()
		{
			Node *temp=head;
			while(temp->getnext()!=NULL)
			{
				temp=temp->getnext();
			}
			temp->getprev()->setnext(NULL);
			delete temp;
			
		}
		
		void print()
		{
			Node *temp=head;
			while(temp!=NULL)
			{
				cout<<temp->getdata()<<"-->";
				temp=temp->getnext();
			}
			cout<<endl;
		}
		
		void printR(Node *head)
		{
			if(head==NULL)
			return;
			printR(head->getnext());
			cout<<head->getdata()<<"-->";
			
		}
		
		void printR()
		{
			printR(head);
		}
};
int main()
{
	string data,c;
	linklist ll;
	while(1)
	{
			cin>>c;
		if(c=="ib")
		{
			cin>>data;
			ll.insertB(data);
		}
		
		else if(c=="ie")
		{
			cin>>data;
			ll.insertE(data);
		}
		else if(c=="d")
		{
			cin>>data;
			ll.deleteE(data);
		}
		else if(c=="db")
		{
			ll.deleteB();
		}
		else if(c=="de")
		{
			ll.deleteend();
		}
		else if(c=="p")
		{
			ll.print();
		}
		
		else if(c=="r")
		{
			ll.printR();
		}
		else if(c=="e")
		{
			exit(0);
		}
	}
	return 0;
}
