//============================================================================
// Name        : LinkedLists.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Node{
public:
	int data;
	Node* next;
};

Node* head = NULL;

void insertAtHead(int new_data){
	Node* new_node = new Node();//creating a new node in heap
	new_node->data = new_data;//giving value to node
	new_node->next = head;//since we are adding node at the beginning of the LinkedList

	head = new_node;//now head will be the new_node added
}

void insertAtTail(int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;

	head->next = new_node;
}

void insertAfter(Node* prev_node, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = prev_node->next;

	prev_node->next = new_node;
}

void print(){
    Node* n = head;
	while(n){
		cout<<n->data<<" ";
		n = n->next;
	}
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	insertAtHead(5);
	print();
	cout<<endl;
	insertAtTail(6);
	print();
	cout<<endl;
	insertAtHead(7);
	print();
	cout<<endl;
	insertAfter(head->next, 8);
	print();
	return 0;
}
