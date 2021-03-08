//============================================================================
// Name        : BinarySearch.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int binarySearch(int key, int arr[],int l, int r){

	if(r>l){
	int mid = l + (r-1)/2;

	if(arr[mid]==key){
		return key;
	}

	if(arr[mid]>key){
		return binarySearch(key, arr, l, mid-1);
	}

	if(arr[mid]<key){
		return binarySearch(key, arr, mid+1, r);
	}
	}
	return -1;
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
	int key;
	cin>>key;

	cout<<binarySearch(key, arr, 0, n-1)<<endl;
	cout<< "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
