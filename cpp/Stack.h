
#include <iostream>
#include <cstring>
#include <stdlib.h>
#include "LinkListSir.h" 

using namespace std;

class Stack{

private:		
	LinkList ll;

public:
	Stack(){ }	

	void push(TreeNode* data){
		if( isFull() ){
			cout<<"Stack is Full"<<endl;
			return;
		}
		ll.insertB( data );
	}

	TreeNode* pop(){
		if( isEmpty() ){
			cout<<"Stack is Empty"<<endl;
			return NULL;
		}
		return ll.deleteB();
	}

	int isFull(){
		if ( ll.isFull() )
			return 1;
		return 0;
	}

	int isEmpty(){
		if( ll.isEmpty() )
			return 1;
		return 0;
	}
};

