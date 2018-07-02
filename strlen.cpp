/*
Define a function strlen that takes a single character array as input, src. 
src is a null-terminated character array. 
Return the number of non-null characters in the string. 
Example: "hi" should return 2 while "" should return 0. 
*/

#include <iostream>
using namespace std;

// return the length (# non-null characters) of the C-string
// (null-terminated character array) passed as an argument
int strlen(char* myCString)
{
	int i = 0;
	while(myCString[i] != '\0'){
		i++;
	}
	return i;
}

int main()
{
	char str1[] = "abcdefghijklmnopqrstuvwxyz";
	char str2[] = "len";
	char str3[1] = "";

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	cout << strlen(str3) << endl;

	return 0;
}