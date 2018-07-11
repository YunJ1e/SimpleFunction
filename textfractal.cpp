/*

A ruler's pattern makes shorter marks each time you divide the length in half. 
Mimic this with a static method printRuler(n) 
that prints a ruler like this whose longest line has length n.

*/

#include <iostream>
using namespace std;

void printRuler(int n){
	// return if we are in the base case
	if( n ==0 ){
		return;
	}
	// otherwise, make two recursive calls, 
	// with a length-n line in between
	printRuler(n-1);
	for(int i=0; i < n; i++){
		cout << "- ";
	}
	cout << endl;
	printRuler(n-1);
}

void f2(int n) { 
	if (n > 0) 
		{ cout << "*"; f2(n-1); } 
} 

void f1(int m, int n){ 
	if( m > 0 ){ 
		f2(n); 
		cout << endl; 
		f1(m-1, n); 
	}
}

void rfunc(int n, int t) { 
	if (n == 0) { 
		cout << t << " "; 
		return; 
	} 
	rfunc(n-1, 3*t); 
	rfunc(n-1, 3*t+2); 
	rfunc(n-1, 3*t+1);
}

int g(int n) { 
	if (n % 2 == 0) 
		return n/10; 
	return g(g(n/10)); 
}

int main(){
	// int n;
	// cin >> n;
	// printRuler(n);

	// f1(4,3);  // This will return a 4*3 * matrix
	rfunc(2,0);  // 0 2 1 6 8 7 3 5 4
	cout << g(3122013) << endl; // This will return 31
} 