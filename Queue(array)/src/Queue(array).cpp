//============================================================================
// Name        : Queue(array).cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Array implementation of queue C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define n 20

class queue{

	int* arr;//dynamic array
	int front;//front element
	int back;//last element

public:
	queue(){//class constructor
		arr = new int[n];
		front = -1;
		back = -1;
	}

	void push(int x){

		if(back==n-1){//if back is last element of the queue
			cout<<"Queue Overflow"<<endl;
			return;
		}
		back++;
		arr[back]=x;

		if(front==-1){//if no element at front
			front++;
		}
	}

	void pop(){

		if(front==-1 || front>back){//if queue is empty or front is deleted more than value of back
			cout<<"Nothing to pop"<<endl;
			return;
		}
		front++;
	}

	int peek(){

		if(front==-1 || front>back){
			cout<<"Nothing to pop"<<endl;
			return -1;
		}
		return arr[front];
	}

	bool empty(){
		if(front==-1 || front>back){
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

	return 0;
}

//queue operates FIFO order
//FIFO: first In first OUT
//ex- making a queue ffor school bus
//Its operations are same as stack but conditions are different
