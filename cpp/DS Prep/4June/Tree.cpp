#include<iostream>
#include<stdlib.h>
using namespace std;


class TreeNode{
	private:
		string data;
		TreeNode *left;
		TreeNode *right;
	
	public:
		TreeNode(){
		}
		
		TreeNode(string data){
			this->data=data;
			left=right=NULL;
		}
		
		string getData(){
			return this->data;
		}
		
		TreeNode* getLeft(){
			return this->left;
		}
		
		TreeNode* getRight(){
			return this->right;
		}
		
		void setData(string data){
			this->data=data;
		}
		
		void setLeft(TreeNode* left){
			this->left=left;
		}
		
		void setRight(TreeNode* right){
			this->right=right;
		}
};

class Stack{
	private:
		int top;
		TreeNode* data[100];
		
	public:
		Stack(){
			top=0;
		}
		
		bool isEmpty()
		{
			if(top<0)
			{
				return true;
			}
			else
				return false;
		}
		
		bool isFull()
		{
			if(top>99)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		
		void push(TreeNode* node)
		{
			if(isFull())
			 {
			 	cout<<"The stack is full."<<endl;
			 	return;
			 }
			 else
			 {
				data[top]=node;
				top++;
			 }
		}
		
		TreeNode* pop()
		{
			if(isEmpty()){
				cout<<"The stack is empty."<<endl;
				return NULL;
			}
			top--;
			return data[top];
			
		
	}
		
};

class Tree{
	private:
		TreeNode* root;
		
	public:
		Tree(){
			root=NULL;
		}
		
		void insert(string data){
			TreeNode* node=new TreeNode(data);
			
			if(root=NULL){
				root=node;
			}
			else{
				TreeNode* temp=root;
				TreeNode* prev=NULL;
				
				while(temp!=NULL){
					prev=temp;
					if(atoi(data.c_str())>=atoi(temp->getData().c_str())){
						temp=temp->getRight();
					}
					else{
						temp=temp->getLeft();
					}
				}
				
				if(atoi(data.c_str())>=atoi(prev->getData().c_str())){
					prev->setRight(node);
				}
				else{
					prev->setLeft(node);
				}
			}
		}
		
		
		
		
		void DFS(){
			Stack store;
			store.push(root);
			
			
		}
};

int main()
{
	return 0;
}
