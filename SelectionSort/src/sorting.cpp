//============================================================================
// Name        : sorting.cpp
// Author      : Palash Jamaiwar
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void sort(int n, int arr[]){
	for(int i=0; i<n-1; i++){
			for(int j=i+1; j<n; j++){
				if(arr[i]>arr[j]){
					int temp = arr[i];
					arr[i]=arr[j];
					arr[j]=temp;
				}
			}
		}
		for(int i=0; i<n; i++){
				cout<<arr[i]<<" ";
			}
		cout<<endl;
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

//	for(int i=0; i<n-1; i++){
//		for(int j=i+1; j<n; j++){
//			if(arr[i]>arr[j]){
//				int temp = arr[i];
//				arr[i]=arr[j];
//				arr[j]=temp;
//			}
//		}
//	}
//	for(int i=0; i<n; i++){
//			cout<<arr[i]<<" ";
//		}
//	cout<<endl;
	sort(n, arr);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}