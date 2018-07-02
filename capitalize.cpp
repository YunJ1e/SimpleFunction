/*
Define a function capitalize that takes a C string and capitalizes every letter in it. 
Non-letters should be left alone. 
*/

#include <iostream>
using namespace std;

void capitalize(char text[]) {
	int i = 0;
	while(text[i] != '\0'){
		if(text[i] >= 'a' && text[i] <= 'z'){
			text[i] = text[i] + 'A' - 'a';
		}
		i++;
	}
}

int main() {
	char word[81]; // allow a word up to 80 characters
	cin >> word;
	cout << "Before calling your function, word is: " << word << endl;

	// call YOUR function
	capitalize(word);

	cout << "After calling your function, word is: " << word << endl;
	return 0;
}