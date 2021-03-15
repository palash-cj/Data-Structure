//============================================================================
// Name        : Inheritance.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class shape{//Base class
public:
	void setWidth(int w){
		width = w;
	}
	void setHeight(int h){
		height = h;
	};

protected:
	int width;
	int height;
};

class Rectangle :public shape{//Derived class
public:
	int area(){
		return(width*height);
	}
};

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Rectangle rect;
	rect.setWidth(20);
	rect.setHeight(30);
	cout<<"Area of rectangle is "<<rect.area()<<endl;
	return 0;
}

//Inheritance is by which properties of one class can be accessed by another class
//Base Class: It is a parent class from which another class can access its properties
//Derived class OR Inherit class: it is a child class who itself accesses the properties of parent class
