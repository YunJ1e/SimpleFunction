/*
Define a function void swap_elements(int arr[], int i, int j) that takes an array arr, 
and swaps the elements at positions i and j. 
*/

#include <iostream>
using namespace std;

void swap_elements(int arr[], int i,int j){
	int temp;
	temp = arr[i-1];
	arr[i-1] = arr[j-1];
	arr[j-1] = temp;
}

int main(){
	// read n,i,j, then n inputs
	int the_inputs[100];
	int n,i,j;
	cin >> n >> i >> j;
	for(int k=0;k<n;k++){
		cin >> the_inputs[k];
	}

	cout << "Before calling your function, the array contains: ";
	
	for(int k=0;k<n;k++){
		cout << the_inputs[k] << " ";
		cout << endl;
	}

	swap_elements(the_inputs,i,j);

	// is the output correct?
	cout << "After calling your function, the array contains: ";
	for (int k=0; k<n; k++) cout << the_inputs[k] << " ";
	return 0;
}