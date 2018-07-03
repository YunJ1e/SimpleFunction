#include <iostream>
#include <cstdlib>
using namespace std;

// main should accept command-line arguments
int main(int argc,char* argv[]) {
	int sum = 0;
	int i;
	if(argc < 2){
		cout << "Please enter the number(s)" << endl;
		return 1;
	}
	// convert and add up each argument
	for (int i=1;i<argc;i++) {
		sum += atoi(argv[i]);
	}

	cout << "Sum is " << sum << endl;
	return 0;
}