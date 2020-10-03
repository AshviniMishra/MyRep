
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "TreeNode.h"

#ifndef _LINKLIST_H
#define _LINKLIST_H

class Node{

	private:
		TreeNode *data;
		Node *next;
	public:
		Node(){}

		Node(TreeNode *data){
			this->data = data;
			this->next = NULL;
		}

		TreeNode* getData(){
			return data;
		}

		Node* getNext(){
			return next;
		}

		void setNext(Node *next){
			this->next = next;
		}
};

class LinkList{

	private:
		Node *head;
	public:
		LinkList(){
			head = NULL;	
		}

		~LinkList(){
			Node *temp = head;
			while( temp != NULL){
				Node *curr = temp;
				temp = temp->getNext();
				delete curr;	
			}

		}

		int isFull(){
			Node *node = new Node();
			if( node == NULL){
				return 1;
			} 
			return 0;
		}

		int isEmpty(){
			if(head == NULL)
				return 1;
			return 0;
		}

		TreeNode* getHeadData(){
			return head->getData();
		}

		TreeNode* deleteB(){
			TreeNode *data = head->getData();
			Node *tmp = head;
			head = head->getNext();
			delete tmp;
			return data;
		}

		void insertB(TreeNode *data){

			Node *node = new Node(data);
			if( head  == NULL){
				head = node;
			}else{
				node->setNext(head);
				head = node;
			}
		}

		TreeNode* deleteE(){
			Node *temp = head;
			Node *prev = NULL;

			while( temp->getNext() != NULL){
				prev = temp;
				temp = temp->getNext();
			}
			TreeNode *data = temp->getData();
			if( prev == NULL ){
				head = NULL;
			}else{
				prev->setNext( NULL );
				delete temp;
			}		
			return data;
		}

		void insertE(TreeNode *data){
			Node *node = new Node(data);
			if( head  == NULL){
				head = node;
			}else{

				Node *temp = head;
				while( temp->getNext() != NULL){
					temp = temp->getNext();
				}
				temp->setNext( node ); 
			}
		}
};

#endif
