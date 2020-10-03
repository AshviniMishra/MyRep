#include<iostream>
#include<cstring>
#include<stdlib.h>
#include"stack.h"
#include"Queue.h"

using namespace std;
	
class Treenode
{
	private:
		string data;
		Treenode *right;
		Treenode *left;
	public:
			Treenode(string data)
			{
				this->data=data;
				right=left=NULL;
			}
			
			string getdata()
			{
				return data;
			}
			
			Treenode *getright()
			{
				return right;
			}
			
			Treenode *getleft()
			{
				return left;
			}
			
			void setright(Treenode *right)
			{
				this->right=right;
			}
			
			void setleft(Treenode *left)
			{
				this->left=left;
			}
			
			~Treenode()
			{
				
			}
				
};

class Tree
{
	private:
		Treenode *root;
		
	public:
		
		Tree()
		{
			root=NULL;
		}
		
		void insert(string data)
		{
			Treenode *node=new Treenode(data);
			
			if(root == NULL)
				root=node;
				
				else
				{
					Treenode *temp=root;
					Treenode *prev=NULL;
					
					while(temp!=NULL)
					{
						prev=temp;
						if(atoi(data.c_str())>=atoi(temp->getdata().c_str()))
							temp=temp->getright();
							
						else
							temp=temp->getleft();
					}
					
					if(atoi(data.c_str())>=atoi(prev->getdata().c_str())){
						prev->setright(node);
					}
					
					else
					
					{
						prev->setleft(node);
					}
				}
		}
		
	void DFS()
	{
		Stack store;
		store.push(root);
		while(!store.isEmpty())
		{
			Treenode* data=store.pop();
			cout<<data->getdata()<<" ";
			if(data->getLleft()!==NULL)
				store.push(data->getleft());
			if(data->getright()!=NULL)
				store.push(data->getright());
		}
	}
		
		
		
};

int main()
{
	return 0;
}
