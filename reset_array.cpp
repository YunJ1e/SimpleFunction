/*
Define a function void reset_array(int arr[], int n) 
that takes an array arr of length n, and resets all of its entries to zero. 
*/

#include <iostream>
using namespace std;

void reset_array(int arr[],int n){
	for(int i=0;i<n;i++){
		arr[i] = 0;
	}
}

int main(){
	int the_inputs[100];
	int n;
	// read n, then n inputs
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> the_inputs[i];
	}
	reset_array(the_inputs,n);
	// is the output correct?
	cout << "After calling your function, the array contains: ";
	for(int i=0;i<n;i++){
		cout << the_inputs[i] << " ";
	}
	return 0;
}