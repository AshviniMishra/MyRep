#include<iostream>
using namespace std;
class Node
{
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
		Node* getNext()
		{
			return this->next;
		}
};
class LinkList
{
	private:
		Node* head;
	public:
		LinkList()
		{
			head=NULL;
		}
		
		void insertB(string data)
		{
			Node *node=new Node(data);
			if(head==NULL)
			{
				head=node;	
				//cout<<"Ib called 1st";
			}
			else
			{
				node->setNext(head);
				head=node;
				//cout<<"Ib called later/.";
			}
		}
		
		void print()
		{
			Node *temp=head;
			while (temp!=NULL)
			{
				cout<<temp->getData()<<"-->";
				temp=temp->getNext();
			}
		}
};
int main()
{
	string cmd,data;
	LinkList ll;
	while(true)
	{
		cin>>cmd;
		if(cmd=="ib")
		{
			cin>>data;
			ll.insertB(data);
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
