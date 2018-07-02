/*
Write a program that takes an input n, then n more int inputs. 
You may assume n is less than 100. 
If all the numbers are distinct, print "distinct". Otherwise, print out "not distinct". 
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;

	int vals[100];
	bool distinct_or_not = true;
	// fill out the array
	for(int i=0;i<n;i++){
		cin >> vals[i];
	}

	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if (vals[i] == vals[j]){
				distinct_or_not = false;
			}
		}
	}

	if(distinct_or_not){
		cout << "distinct" <<endl;
	}
	else{
		cout << "not distinct" <<endl;
	}
}