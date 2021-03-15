//============================================================================
// Name        : ConstructorDestructor.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Constructor & Destructor C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Line{
public:
	void setLength(double len);
	double getLength(void);
	Line();//Constructor
	~Line();//Destructor

private:
	double length;
};

Line::Line(void){//:: this is scope resolution
	cout<<"Object is being created"<<endl;
}

Line::~Line(void){
	cout<<"Object is being deleted"<<endl;
}

void Line::setLength(double len){
	length = len;
}

double Line::getlength(void){
	return length;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	Line l;
	l.Line();//Constructor
	l.~Line();//Destructor
	l.setLength(100);
	cout<<"Length of Line "<<length<<endl;
	return 0;
}


//Notes:-
//Constructor Rules:
//It has no return type.
//It is always declared in Public class
//It does not follows inheritance
