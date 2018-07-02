/*
Write a program that takes an input n, then n more string inputs. 
You may assume n is less than 100. 
Print out all of the strings, one per line, and then print them all out again
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
	string MyString[100];

	int count;
	cin >> count;

	for(int i=0;i<count;i++){
		cin >> MyString[i];
	}
	for(int i=0;i<count;i++){
		cout << MyString[i] <<endl;
	}
	for(int i=0;i<count;i++){
		cout << MyString[i] <<endl;
	}
}