#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "LinkListSir.h"

using namespace std;

class Queue{

private:
	LinkList ll;
public: 
	Queue(){
	}
	
	void enqueue(TreeNode* data){
		if( isFull() ){
			cout<<"Queue is full"<<endl;
			return;
		}
		ll.insertB( data );
	}
	
	TreeNode* dequeue(){
		if( isEmpty() ){
			cout<<"Queue is Empty"<<endl;
			return NULL;
		}
		return ll.deleteE();
	}

	int isFull(){
		if( ll.isFull() )
			return 1;
		return 0;
	}

	int isEmpty(){
		if( ll.isEmpty() )
			return 1;
		return 0;
	}
};
