#include <iostream>
using namespace std;
/*
Define a function remove_factor that takes two integer arguments,
x and p. x should be a non-zero positive integer and p should be a positive integer bigger than 1. 
The function should return how many times p is a factor of x.
For example if x=40 and p=2,
then you should return 3 since 40 = 2^3 × 5 (i.e. 2 occurs as a factor of 40 three times) 
*/
// return how many times p is a factor of x
int remove_factor(int,int);

int main(){
	cout << remove_factor(50,5) <<endl;
}

int remove_factor(int x,int p){
	int count = 0;
	while(x%p == 0){
		x = x/p;
		count ++;
	}
	return count;
}