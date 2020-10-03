#include <iostream>
#include <cstring>
#include <stdlib.h>

using namespace std;

class CQueue{

private:
	string *items;
	int front;
	int rare;
	int size;
	int elements;
public: 
	CQueue(){

	}
	
	CQueue(int size){
		this->size = size;
		items = new string[size];
		front = rare = -1;
		elements = 0;
	}

	void enqueue(string data){
		if( isFull() ){
			cout<<"Queue is full"<<endl;
			return;
		}
		rare = (rare + 1) % size;
		elements++;
		items[ rare ] = data;
	}
	
	string dequeue(){
		if( isEmpty() ){
			cout<<"Queue is Empty"<<endl;
			return "null";
		}
		front = (front + 1) % size;
		elements--;	
		return items[front];
	}

	int isFull(){
		if ( elements == size )
			return 1;
		else
			return 0;
	}

	int isEmpty(){
		if( elements == 0){
			front = rare = -1;
			return 1;
		}else{
			return 0;
		}
	}
};

int main(int c, char **v){

	//CQueue q( atoi(v[1]) );
	string cmd;
	string data;
	int size;
	cout<<"Enter the size of the queue"<<endl;
	cin>>size;
	CQueue q(size);
	while( 1 ){

		cin>>cmd;

		if( cmd.compare("exit") == 0 || cmd.compare("e") == 0 ){
			exit(0);
		}
		if( cmd.compare("enqueu") == 0 || cmd.compare("en") == 0 ){
			cin>>data;
			q.enqueue(data);
		}
		if( cmd.compare("dequeue") == 0 || cmd.compare("de") == 0 ){
			cout<<q.dequeue()<<endl;
		}
	}

return 0;
}

