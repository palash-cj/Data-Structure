//============================================================================
// Name        : Queue(stack).cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define n 10

class stack{//class for defining stack
	int* arr;
	int top;

public:
	stack(){//constructor
		arr = new int[n];
		top = -1;
	}

	void push(int x){
		if(top==n-1){
			cout<<"Stack Overflow"<<endl;
			return;
		}
		top++;
		arr[top]=x;
	}

	void pop(){
		if(top==-1){
			cout<<"Stack Underflow"<<endl;
			return;
		}
		top--;
	}

	int Top(){
		if(top==-1){
			cout<<"Nothing to display"<<endl;
			return 0;
		}
		return arr[top];
	}

	bool empty(){
		if(top==-1){
			return true;
		}
		return false;
	}
};

//method2
//class que{//class for queue
//	stack s1;//defining stack 1 & then 2
//	stack s2;
//
//public:
//		void push(int x){
//
//			s1.push(x);
//		}
//
//		int pop(){
//
//			if(s1.empty() && s2.empty()){//if both stacks are empty
//				cout<<"Nothing to display"<<endl;
//				return 0;
//			}
//
//			if(s2.empty()){
//				while(!s1.empty()){
//					s2.push(s1.Top());
//					s1.pop();
//				}
//			}
//
//			int topVal = s2.Top();
//			s2.pop();
//			return topVal;
//		}
//
//		bool empty(){
//			if(s1.empty() && s2.empty()){
//				return true;
//			}
//			return false;
//		}
//
//};



//Method 1
//class que{
//	stack s1;
//
//public:
//	void push(int x){
//		s1.push(x);
//	}
//
//	int pop(){
//		if(s1.empty()){
//			cout<<"Nothing to display"<<endl;
//			return 0;
//		}
//
//		int topVal = s1.Top();
//		s1.pop();
//
//		if(s1.empty()){
//			return topVal;
//		}
//		int item = pop();
//		s.push(topVal);//here s is inbuilt c++ library stack
//		return item;
//	}
//
//	bool empty(){
//		if(s1.empty()){
//			return true;
//		}
//		return false;
//	}
//};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	que q;

	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;
	cout<<q.pop()<<endl;

	q.empty()? cout<<"yes" : cout<<"No";

	return 0;
}

//Algorithm:method 1
//So stack implementation of queue is nothing but reversing the stack OR
//Using stack we have to implement FIFO order

//We are defining 2 stacks.
//top of stack1 will be pushed to stack2 untill stack1 becomes null
//now top of stack2 will have the first element of stack1
//we will cout the top of stack2
