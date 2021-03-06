//============================================================================
// Name        : search.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int linearSearch(int key, int arr[], int n){

	for(int i=0; i<n; i++){
		if(arr[i]==key){
			return key;
		}
	}
	return -1;
}

int main() {
	int n;
	cin>>n;

	int arr[n];

	for(int i=0; i<n;i++){
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}

	int key;
	cin>>key;

	cout<<linearSearch(key, arr, n)<<endl;
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
