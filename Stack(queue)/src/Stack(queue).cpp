//============================================================================
// Name        : Stack(queue).cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Implementing Stack using queue C++, Ansi-style
//============================================================================

#include <iostream>
#define n 10
using namespace std;

class queue{
	int* arr;
	int front;
	int back;

public:
	queue(){
		arr = new int[n];
		front = -1;
		back= -1;
	}

	void push(int x){
		if(back== n-1){
			cout<<"Queue Overflow"<<endl;
			return;
		}

		back++;
		arr[back]=x;

		if(front==-1){
			front++;
		}
	}

	int pop(){

		if(front == -1 || front > back){
			cout<<"Queue Underflow"<<endl;
			return 0;
		}
		return arr[front];
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
		if(front == -1 || front > back){
			return true;
		}
		return false;
	}


};

class stack{
	queue q1;
	queue q2;
	int N;

public:
	void push(int x){

		q2.push(x);
		N++;
		while(!q1.empty()){
			int top = q1.peek();
			q2.push(top);
			q1.pop();

		}

		queue temp = q1;
		q1 = q2;
		q2 = temp;

	}

	int pop(){

		return q1.peek();
		q1.pop();

	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	stack s;

	s.push(10);
	s.push(20);

//
//	cout<<s.pop();
//	cout<<s.pop();


	return 0;
}
