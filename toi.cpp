#include <iostream>
using namespace std;

int ctoi(char ch) {
	int ch_as_int = (int)ch;

	return ch_as_int - (int)'0'; // The ASCII code does not start from actual 0
}

int atoi(char* str) {
	int value = 0;
	int i = 0;
	while (*str != '\0') { 
	// iterate through C string
	// multiply by 10 and add next ctoi each time
		value = value*10;
		value = value + ctoi(*str);
		str++;
	}
	return value;

}

int main(){
	char Mystring[] = "365";
	cout << ctoi('7') + 10 << endl;
	cout << atoi(Mystring) + 20 << endl;
}