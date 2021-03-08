//============================================================================
// Name        : InsertionSort.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sort(int n, int arr[]){

	int i, j, key;
	for(int i=1; i<n;i++){


		key=arr[i];
		j = i-1;
		while(j>=0 && arr[j]>key){
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j+1]=key;
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
}

int main() {

	int n;
	cin>>n;

	int arr[n];

	for(int i=0; i<n; i++){
		cin>>arr[i];
	}

	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	sort(n, arr);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
