//============================================================================
// Name        : Stack.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Stack push, pop, top, linearSearch C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#define n 5//defines the value of n(max no of stacks)

class stack{
	int* arr;//dynamic array
	int top;//traversal
	int count;

public:
	stack(){
	arr = new int[n];//allocates space in heap
	top = -1;//top is -1 means stack is empty

	count = 0;
	}

	void push(int x){
		if(top == (n-1)){
			cout<<"Stack Overflow"<<endl;
			return;
		}
		top++;
		count++;
		arr[top]=x;
	}

	void pop(){
		if(top == -1){
			cout<<"Stack Underflow"<<endl;
			return;
		}
		top--;
		count--;
		cout<<"An element is removed"<<endl;
	}

	int Top(){
		if(top == -1){
			cout<<"No element to display"<<endl;
			return -1;
		}
		return arr[top];
	}

	bool empty(){
		if(top== -1){
			return true;
		}
		return false;
	}

	void linearSearch(int key){
		for(int i=1; i<=count; i++){
			if(arr[i]==key){
				cout<<"Yes it is present"<<endl;
			}
		}
	}

};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	stack st;
	st.push(10);
	st.push(20);
	st.push(30);
	st.push(40);
	st.push(50);
	st.push(60);

	int key;
	cin>>key;

	st.linearSearch(key);

	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	st.empty()? cout<<"Yes" : cout<<"No";
	cout<<endl;
	cout<<st.Top()<<endl;
	st.pop();
	st.pop();
	st.pop();
	cout<<st.Top()<<endl;

	st.linearSearch(key);
	return 0;
}
