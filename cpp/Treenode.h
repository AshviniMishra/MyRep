#include <cstring>
#include <iostream>
 
#ifndef _TREENODE_H
#define _TREENODE_H

using namespace std;

class TreeNode{

	private:		
		string data;
		TreeNode *left;
		TreeNode *right;	
	public:
		TreeNode(){}

		TreeNode(string data){
			this->data = data;
			left = right = NULL;
		}

		~TreeNode(){
		}
		
		void setLeft(TreeNode *left){
			this->left = left;
		}
		
		string getData(){
			return data;
		}

		void setRight(TreeNode *right){
			this->right = right;
		}
		
	        TreeNode* getLeft(){
			return left;	
		}
		
		TreeNode* getRight(){
			return right;
		}
};

#endif
