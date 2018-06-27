#include <iostream>
using namespace std;

/*
This part will not increment the x by 1
This piece of code only copies the value of x 
and calculates the arguments in the function without
returning any results.
*/

// void inc(int x){
// 	x = x + 1;
// }

// int main(){
// 	int x = 6;
// 	inc(x);
// 	cout << x <<endl;
// }


// Prototype Declare, this function can be implemented later.
/*
double triangle_area(double,double);

int main(){
	double area;
	area = triangle_area(5.0,3.5);
	cout << area <<endl;
}

double triangle_area(double base,double height){
	return 0.5 * base * height;
}

Functions have a signature: name & number + type of argument
Function overloads: Two functions actually can have the same name,
as long as they have differentsignatures over all.
int f1(int) is different from int f1(double)


The actual parameters live in calling functions.
Copies are placed into the formal parameters, 
which are in the stack frame for the function.
Operations on the formal parameters local to that stack frame

*/

