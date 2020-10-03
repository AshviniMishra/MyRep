#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

class Treenode
{
	private:
		string data;
		Treenode *left;
		Treenode *right;
	public:
		Treenode(string data)
		{	
			this->data=data;
			left=NULL;
			right=NULL;
		}
		
		void setleft(Treenode *left)
		{
			this->left=left;
		}
			
		void setright(Treenode* right)
		{
			this->right=right;
		}
		
		string getdata()
		{
			return data;
		}
		
		Treenode* getleft()
		{
			return left;
		}
		
		Treenode* getright()
		{
			return right;
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
			if(root==NULL)
			{
				root=node;
			}
			else
			{
				Treenode *temp=root;
				Treenode *prev=NULL;
				while(temp!=NULL)
				if(atoi(data.c_str())>=atoi(temp->getdata().c_str()))
			}
		}
}
int main()
{	
	return 0;
}
