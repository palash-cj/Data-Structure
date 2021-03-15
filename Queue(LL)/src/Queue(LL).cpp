//============================================================================
// Name        : Queue(LL).cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : LL implementation of queue C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Node{//class for defining nodes
public:
	int data;//data to be inserted in node
	Node* next;//

	Node(int val){//constructor
		data = val;
		next = NULL;
	}
};

class queue{

	Node* front;//tracking first node of the queue
	Node* back;//tracking last node of the queue

public:
	queue(){//constructor
		Node* front = NULL;//at initial stage
		Node* back = NULL;
	}

	void push(int x){

		Node* n = new Node(x);//allocating space to new node

		if(front==NULL){//if queue is empty
			front = n;
			back = n;
			return;
		}

		back->next = n;
		back = n;
	}

	void pop(){

		if(front==NULL){
			cout<<"Queue Underflow"<<endl;
			return;
		}

		Node* todelete = front;
		front= front->next;
		delete todelete;
	}

	int peek(){

		if(front==NULL){
			cout<<"Queue Underflow"<<endl;
			return -1;
		}
		return front->data;
	}

	bool empty(){
		if(front==NULL){
			return true;
		}
		return false;
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	queue q;

	q.push(10);
	q.push(20);
	q.push(30);
	q.push(40);
	q.push(50);

	cout<<q.peek()<<endl;

	q.pop();
	cout<<q.peek()<<endl;

	q.pop();
	cout<<q.peek()<<endl;

	q.pop();
	cout<<q.peek()<<endl;

	q.pop();
	cout<<q.peek()<<endl;

	q.pop();
	cout<<q.peek()<<endl;

	q.empty()? cout<<"Yes" : cout<<"No";

	return 0;
}
