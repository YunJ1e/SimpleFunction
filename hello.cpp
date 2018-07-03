#include <iostream>
#include <cstdlib>
using namespace std;

// main should accept command-line arguments
int main(int argc,char* argv[]) {
	if(argc<2 || argc> 2){cout << "Please enter yout name" <<endl;}
	else{
		cout << "Hello, " << argv[1] <<endl;
	}
	return 0;
}