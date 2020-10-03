#include<iostream>
using namespace std;
class Node{
	private:
		string data;
		Node* next;
		Node* prev;
	
	public:
		Node()
		{
		}
		
		Node(string data){
				this->data=data;
				next=NULL;
				prev=NULL;
		}
		
		void setData(string data)
		{
			this->data=data;
		}
		
		void setNext(Node* next)
		{
			this->next=next;
		}
		
		void setPrev(Node* prev)
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

class LinkedList{
	private:
		Node* head;
		
	public:
		LinkedList()
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
			Node* node=new Node(data);
			if(head==NULL){
				head=node;
			}
			else{
				Node* temp=head;
				while(temp->getNext()!=NULL)
				{
					temp=temp->getNext();
				}
				temp->setNext(node);
				node->setPrev(temp);
			}
		}
		
		void print()
		{
			Node* temp=head;
			while(temp!=NULL)
			{
				cout<<temp->getData()<<"-->";
				temp=temp->getNext();
			}
			cout<<endl;
		}
		
		string deleteB()
		{
			if(isEmpty())
			{
				return "The store is empty";
			}
			else
			{
				Node* temp=head;
				head=head->getNext();
				head->setPrev(NULL);
				string data=temp->getData();
				delete temp;
				return data;	
			}
		}
		
		string deleteE()
		{
			if(isEmpty())
			{
				return "The store is empty";
			}
			else
			{
				Node* temp=head;
				while(temp->getNext()!=NULL)
				{
					temp=temp->getNext();
				}	
				string data=temp->getData();
				temp->getPrev()->setNext(NULL);
				delete temp;
				return data;
			}
		}
		
		bool isEmpty()
		{
			if(head==NULL)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		bool isFull()
		{
			Node* node=new Node();
			if(node==NULL)
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
	LinkedList ll;
	
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
		
		else
			if(cmd=="db")
			{
				cout<<ll.deleteB();
			}
			else
				if(cmd=="de")
				{
					cout<<ll.deleteE();
				}
		else
		if(cmd=="p")
		{
			ll.print();
		}
		else
		if(cmd=="e")
		{
			exit(0);
		}
	}	
	return 0;
}
