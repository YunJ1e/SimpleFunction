/*
Define a function 
void replace_first(int arr[], int n, int target, int replacement) 
that takes an array arr of length n, 
finds the first entry whose value equals target,
and changes its value to replacement. 
If no such entry exists, do nothing. 
*/

#include <iostream>
using namespace std;

void replace_first(int arr[], int n,int target, int replacement){
	for(int i=0;i<n;i++){
		if(arr[i] == target){
			arr[i] = replacement;
			break;
		}
	}
}

int main(){
	// read n, t, r, then n inputs
	int the_inputs[100];
	int n, t, r;
	cin >> n >> t >> r;
	for (int i=0; i<n; i++) cin >> the_inputs[i];
	cout << "Before calling your function, the array contains: ";
	for (int i=0; i<n; i++) cout << the_inputs[i] << " ";
	cout << endl;

	// call YOUR function
	replace_first(the_inputs, n, t, r);

	// is the output correct?
	cout << "After calling your function, the array contains: ";
	for (int i=0; i<n; i++) cout << the_inputs[i] << " ";
	return 0;
 }