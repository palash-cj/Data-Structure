//============================================================================
// Name        : Public.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Public Private Protected C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//Method 1
class Example1{
private:
	int a;
};

class Example2 :public Example1{
public:
	void init_a(int a){
		this-> a=a;
	}

	void print_a(){
		cout<<"a "<<a<<endl;
	}
};


//Method 2
//class Example{
//private:
//	int val;
//
//public:
//	void init_val(int a){
//		val = a;
//	}
//
//	void print_val(){
//		cout<<"Val "<<val<<endl;
//	}
//};


int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
//Method 2
	Example2 ex;
	ex.init_a(100);
	ex.print_a();

	//Method2

//	Example ex;
//	ex.init_val(100);
//	ex.print_val();

	return 0;
}
