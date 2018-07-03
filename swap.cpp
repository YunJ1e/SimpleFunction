/*
Define a function exchange that takes two int pointers as inputs. 
It should exchange the values held at the locations pointed to by its arguments. 
*/
#include <iostream>
using namespace std;

void exchange(int* a,int* b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int x = 4, y = 5;
	cout << "Before exchange, x is " << x << " and y is " << y << endl;
	exchange(&x, &y);
	cout << "After exchange, x is " << x << " and y is " << y << endl;
	return 0;
}