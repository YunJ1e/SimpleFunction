#include <iostream>
#include <cstring>
using namespace std;
/*
For this exercise, we'll use C++ string objects. To get the kth char from a string s, write s[k], like an array. 
Complete the method int frequency(string haystack, char needle) 
so that it returns the number of times that the character needle occurred in haystack. 
For example frequency("hello", 'l') should return 2. 

Then, define a function vowel_count that takes a string argument and returns the number of vowels it contains. 
Assume the vowels are: a, e, i, o, and u. For example vowel_count("hello") should be 2. Hint: use frequency. 
*/

int frequency(string, char);
int vowel_count(string);

int main(){
	
	string test = "China";
	cout << frequency(test,'t') << endl;
	cout << vowel_count(test) <<endl;
}

// return the number of times that needle occurs in haystack
int frequency(string haystack, char needle) {
	int n = haystack.length(); // this is how you get length of C++ string
	int result = 0;

	// loop to count the occurrences 
	for (int i=0; i<n; i++) { // look at ith character 
		if (haystack[i] == needle){
			result++;
		}
	}

	return result;
} 

// return the number of vowels in the given string
int vowel_count(string Test){
	int result = 0;
	char vowels[5] = {'a','e','i','o','u'};
	for (int i = 0; i < 5;i++){
		result = result + frequency(Test,vowels[i]);
	}

	return result;

}