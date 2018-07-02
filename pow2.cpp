/*
Write a program that takes an input n, 
and fills out the array pows with the first n powers of 2. 
For example, pows[0] should be 1, pows[1] should be 2, pows[2] should be 4, etc. 
Hint: you can't use pow, but what is the pattern in the numbers? 
*/

#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	// declare an array called "pows"
	int pows[30];
	pows[0] = 1;
	// fill out the array
	for(int i=1;i<n;i++){
		pows[i] = pows[i-1] * 2;
	}

	for(int i =0;i<n;i++){
		cout << "2^" << i << " is " << pows[i] <<endl; 
	}
	return 0;

}