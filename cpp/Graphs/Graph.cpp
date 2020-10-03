#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

class Graph{

	private:
		int V;
		int E;
		int **graph;
		string *vertex;
	public:
		Graph(){ }

		Graph(int V, int E){
			this->V = V;
			vertex = new string[V];
			this->E = E;
			graph = new int*[V];
			for(int i = 0; i < V; i++){
				graph[i] = new int[V];
				//for( int j = 0; j < V; j++)
				//	graph[i][j] = 999999;
				vertex[i] = "";
			}
		}

		int getIndex(string city){
			for(int i = 0; i < V; i++){
				if( vertex[i].compare(city) == 0)
					return i;
				else if( vertex[i].compare("") == 0){
					vertex[i] = city;
					return i;
				}
			}
		return -1;
		}

		void print(){
			for(int i = 0; i < V; i++){
				for(int j = 0; j < V; j++){
					cout<<graph[i][j]<<" "; 
				}
				cout<<endl;
			}
		}

		void addEdge(string s, string d, int weight){
				
			if(getIndex(s) >= V || getIndex(d) >= V || getIndex(s) < 0 || getIndex(d) < 0){
				cout<<"Edge cannot be added"<<endl;
				return;
			}
			graph[ getIndex(s) ][ getIndex(d) ] = weight;
			
		}

		void addEdge(string s, string d){
		
			if(getIndex(s) >= V || getIndex(d) >= V || getIndex(s) < 0 || getIndex(d) < 0){
				cout<<"Edge cannot be added"<<endl;
				return;
			}
			graph[ getIndex(s) ][ getIndex(d) ] = 1;
		}

		int isEdge(string s, string d){
			if(getIndex(s) >= V || getIndex(d) >= V || getIndex(s) < 0 || getIndex(d) < 0){
				return 0;
			}
			return graph[ getIndex( s ) ][ getIndex( d ) ];
		}
};

int main(){
	
	Graph graph(6, 10);
	string so, de;
	int w;	
	for(int  i = 0; i < 10; i++){
		cin>>so>>de>>w;
		graph.addEdge(so, de, w);
	}		
	graph.print();		
	/*
	while( 1 ){ 
		cin>>so>>de;
		if( graph.isEdge( so ,  de ) )
			cout<<"Direct Path"<<endl;
		else	
			cout<<"No Direct Path"<<endl;
	}	
	*/
return 0;
}
