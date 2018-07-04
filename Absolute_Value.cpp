#include <iostream>
using namespace std;

// return the absolute value of x

int abs(int x) {
	if (x >= 0) {
		return x;
	}
	if (x < 0) {		// This line may cause the program reach the 
		return -x;	// non-void function, so change the if to else statement
	}
} 

int main() {
	cout << abs(3) << endl;
	cout << abs(0) << endl;
	return 0;
}
