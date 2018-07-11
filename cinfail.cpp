#include <iostream>
using namespace std;

int main()
{
	// int x;
	// cout << "Enter an int: " << endl;
	// cin >> x;

	// cout << "Good you entered: " << x << endl;
	// return 0;
	
	int x; 
	cout << "Enter an int: " << endl; 
	cin >> x; 
	// // What if the user enters:“abc” 
	// // Check if we successfully read an int 
	// if(cin.fail()) { 
	// 	cout << "Error:  I said enter an int! "; 
	// 	cout << " Now I must exit!" << endl; 
	// 	return 1; 
	// }
	// cout << "You did it!  You entered an int"; 
	// cout << " with value: " << x; 
	// return 0; 
	
	// Check if we successfully read an int 
	while(  cin.fail() ) { 
		cin.clear(); // turn off fail flag 
		cin.ignore(256, '\n'); // clear inputs 
		cout << "I said enter an int: "; 
		cin >> x;
	} 
	cout << "You did it!  You entered an int"; 
	cout << " with value: " << x; 
	return 1; 
}

