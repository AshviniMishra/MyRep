#include<iostream>
using namespace std;

class Node{
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
			this->next=NULL;
			this->prev=NULL;
		}
		
		void setData(string data)
		{
			this->data=data;
		}
		
		void setNext(Node* next)
		{
			this->next=next;
		}
		
		void setPrev(Node *prev)
		{
			this->prev=prev;
		}
		
		string getData()
		{
			return this->data;
		}
		
		Node* getNext()
		{
			return this->next;
		}
		
		Node* getPrev()
		{
			return this->prev;
		}
		
};

class LinkList{
	private:
		Node* head;
		
	public:
		LinkList()
		{
			this->head=NULL;
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
				node->setNext(head);
				head->setPrev(node);
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
				while(temp->getNext()!=NULL)
				{
					temp=temp->getNext();
				}
				temp->setNext(node);
				node->setPrev(temp);
			}
		}
		
		void deleteB()
		{
			if(head==NULL)
			{
				cout<<"the list empty"<<endl;
				return;
			}
			else
			{
				Node* temp=head;
				head=head->getNext();
				head->setPrev(NULL);
				delete temp;
			}
		}
		
		void deleteE()
		{
			if(head==NULL)
			{
				cout<<"The list is empty"<<endl;
				return;
			}
			else
			{
				Node *temp=head;
				while(temp->getNext()!=NULL)
				{
					temp=temp->getNext();
				}
				temp->getPrev()->setNext(NULL);
				temp->setPrev(NULL);
				delete temp;
			}
		}
		
		string findMin()
		{
			if(head==NULL)
			{
				return "The list is empty";
			}
			else
			{
				string Min=head->getData();
				Node *temp=head;
				while(temp!=NULL)
				{
					if(temp->getData()<Min)
					{
						Min=temp->getData();
					}
					temp=temp->getNext();
				}
				return Min;
			}
			
		}
		
		string findSecMin()
		{
			if(head==NULL)
			{
				return "The list is empty";
			}
			else{
				string Min=head->getData();
				Node *temp=head;
				while(temp!=NULL)
				{
					if(temp->getData()<Min&&temp->getData()>this->findMin())
					{
						Min=temp->getData();
					}
					temp=temp->getNext();
				}
				
				return Min;
			}
		}
		
		void print()
		{
			Node *temp=head;
			if(head==NULL)
			{
				cout<<"The list is empty"<<endl;
				return;
			}
			else
			{
				while(temp!=NULL)
				{
					cout<<temp->getData()<<"-->";
					temp=temp->getNext();
				}
				cout<<"NULL"<<endl;
			}
				
			}
};
int main()
{
	string data,cmd;
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
			ll.deleteB();
		}
		
		else if(cmd=="de")
		{
			ll.deleteE();
		}
		
		else if(cmd=="fm")
		{
			string min=ll.findMin();
			cout<<"This smallest data in the llist is"<<" "<<min<<endl;
		}
		
		else if(cmd=="fM")
		{
			string Min=ll.findSecMin();
			cout<<"The second min value in the list is "<<Min<<endl;
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
