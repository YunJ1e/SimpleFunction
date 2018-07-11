#include <iostream> 
#include <fstream> 
using namespace std; 

int main () { 
	// int x; 
	// double y; 
	// ifstream ifile ("input.txt"); 
	// if(  ifile.fail() ){  // able to open file? 
	// 	cout << "Couldn't open file" << endl; 
	// 	return 1; 
	// } 
	// ifile >> x >> y; 
	// if (  ifile.fail() ){ 
	// 	cout << "Didn't enter an int and double"; 
	// 	return 1; 
	// } 
	// ofstream ofile("output.txt"); 
	// ofile << "Int from file is " << x << endl; 
	// ofile << "Double from file is " << y << endl; 
	// ifile.close(); 
	// ofile.close(); 
	// return 0; 

	char myline[100]; 
	int i = 1; 
	ifstream ifile ("input.txt"); 
	if( ifile.fail() ){  // can't open? 
		return 1;  
	} 
	ifile.getline(myline, 100); 
	while ( ! ifile.fail()) { 
		cout << i++ << ": " << myline << endl; 
		ifile.getline(myline, 100); 
	} 
	ifile.close(); 
	return 0; 

}