//============================================================================
// Name        : ReverseStackSentence.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

void reverseSentence(string s){
	stack<string> st;

	for(int i=0; i<s.length(); i++){
		string word="";
		while(s[i]!=' ' &&  i<s.length()){
			word+=s[i];
			i++;
		}
		st.push(word);
	}
	while(!st.empty(){
		cout<<st.top()<<" ";
		st.pop();
	})cout<<endl;
}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	string s = "Hey, how are you?";
	reverseSentence(s);
	return 0;
}
