//============================================================================
// Name        : BubbleSort.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sort(int n, int arr[]){
	for(int j=0; j<n; j++){
	for(int i=0; i<n; i++){
		if(arr[i]>arr[i+1]){
			int temp = arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=temp;
		}
	}
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
