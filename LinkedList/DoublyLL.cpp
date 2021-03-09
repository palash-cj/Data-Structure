//============================================================================
// Name        : DoublyLL.cpp
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
	Node* prev;
};

Node* head = NULL;

void insertAtHead(int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->prev = NULL;

	if(head==NULL){
		new_node->next = NULL;
		head = new_node;
	}

	else{
		new_node->next = head;
	    head = new_node;
	}
}

void insertAtTail(int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;
	new_node->next = NULL;

	if(head==NULL){
		new_node->prev = NULL;
		head = new_node;
	}

	Node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new_node;
	new_node->prev = temp;

}

void insertAfter(Node* prev_node, int new_data){
	Node* new_node = new Node();
	new_node->data = new_data;

	if(head==NULL){
		new_node->next = NULL;
		new_node->prev = NULL;
		head = new_node;
	}
	else{
		new_node->next = prev_node->next;
		new_node->prev = prev_node;
		prev_node->next = new_node;
	}
}

void deleteAtHead(){
	Node* ptr;
	if(head==NULL){
		cout<<"Linked List is empty"<<endl;
	}
//
	else if(head->next == NULL){
		head = NULL;
		free(head);
	}

	else{
		ptr = head;
		head = head->next;
		head->prev = NULL;
		free(ptr);
	}
}

void deleteAtEnd(){
	Node* ptr;
	if(head==NULL){
		cout<<"empty LL"<<endl;
	}
	else{
		ptr = head;
		while(ptr->next != NULL){
			ptr = ptr->next;
		}
		ptr->prev->next = NULL;
		free(ptr);
	}

}

void deleteAfter(Node* prev){
	if(head==NULL){
		cout<<"empty LL"<<endl;
	}
	else{
		Node* ptr = head;
		while(ptr->next!=prev){
			ptr= ptr->next;
		}
		ptr->next = ptr->next->next;

	}
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

	insertAtHead(55);
	print();
	cout<<endl;
	insertAtHead(56);
	print();
	cout<<endl;
	insertAtTail(57);
	print();
	cout<<endl;
	insertAfter(head->next, 58);
	print();
	cout<<endl;
	deleteAtHead();
	print();
	cout<<endl;
	deleteAtEnd();
	print();
	cout<<endl;
	insertAtTail(58);
	insertAtTail(57);
	insertAtTail(59);
	insertAtTail(54);
	print();
	cout<<endl;
	deleteAtEnd();
	print();
	cout<<endl;
	deleteAfter(head->next->next);
	print();
	return 0;
}
