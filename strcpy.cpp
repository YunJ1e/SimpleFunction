/*
Define a function strcpy() 
that takes a 'src' character array and 'dest' character array as input. 
src and dest are null-terminated character arrays. 
Note the destination array should be the first argument, the source the second argument 
*/

#include <iostream>
using namespace std;

// Copy the characters from the src array to the destination array.
//  The arguments are passed as dest followed by src and both are
//  character arrays (C-Strings).  

void strcpy(char* dest,char* src) {
	int i = 0;
	while(src[i] != '\0'){
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; // Need to terminate the char
}

int main()
{
	char src1[12] = "hello world";
	char src2[10] = "bye";
	char src3[1]  = "";
	char dest[21] = "abcdefghijklmnopqrst";
   
	strcpy(dest, src1);
	cout << dest << endl;
	strcpy(dest, src2);
	cout << dest << endl;
	strcpy(dest, src3);
	cout << dest << endl;
   
	return 0;
}