#include <iostream>
using namespace std;

int main(){
	int a;
	int b[10];
	double c;
	int d;
   
	cout << "address of a: " << &a << endl;
	cout << "address of b: " << b << endl;
	cout << "address of b: " << &b << endl;
	cout << "address of c: " << &c << endl;
	cout << "address of d: " << &d << endl;


	int x,y;
	int *p = &x;
	int *q = &y;
	x = 35;
	y = 46;
	cout << x << " " << y << endl;
	cout << *p << " " << *q <<endl;

	p = q; // T
	*p = 78;
	cout << x << " " << y << endl;
	cout << *p << " " << *q <<endl;

	int m[4];
   
	cout << m << endl;
	cout << &(m[0]) << endl;
	cout << &(m[1]) << endl;
	cout << &(m[2]) << endl;
	cout << &(m[3]) << endl;
	
	int s[] = {20, 14};
   int* t = s; // start at first element
   t = t + 1;
   cout << *s << endl; // what's y pointing to?
}
