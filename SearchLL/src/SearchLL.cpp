//============================================================================
// Name        : SearchLL.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Linear Search in LL C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Node{
public:
	int data ;
	Node* next;
};

Node* head = NULL;

void insert(int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = head;

	head = new_node;
}


void print(){
	Node* n = head;
	while(n){
		cout<<n->data<<" ";
		n = n->next;
	}
}
bool search(int key){
	Node* n = head;

	while(n){
		if(n->data == key){
			return true;
		}

		n = n->next;
	}
	return false;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	int key;
	cin>>key;

	insert(10);
	insert(20);
	insert(30);
	insert(40);
	print();

	cout<<endl;
	search(key)? cout<<"Yes, is present in LL" : cout<<"No, it isn't present in LL";
	return 0;
}
