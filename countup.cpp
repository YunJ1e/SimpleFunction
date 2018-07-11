/*

Write a recursive function countup(int n) that prints out Blastoff!, 
followed by the numbers from 1 to n. 

*/

#include <iostream>
using namespace std;

void countup(int n)
{
	if( n == 0 ){
		cout << "Blastoff!" << endl;
	}
	else{
		countup(n-1);
		cout << n << endl;
	}
}
int main(){
	countup(5);
}