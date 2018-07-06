/* Arrays and Functions */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int roll();
// Returns a random integer from 1 to 6
void printHistogram(int*);
// Print out the sequential labelled lines from x to y

int main(){
	srand(time(NULL));
	int testCounts[21] = {0};  // 21 options of sum of 4 dice => [4,24]
	for(int j=0; j<500; j++){
		int sum = 0;
		for(int i=0; i<4; i++){
			sum = sum + roll();
		}
		testCounts[sum-4]++;
	}
	printHistogram(testCounts);
}

int roll(){
	return 1 + rand()%6;
}
void printHistogram(int counts[]){
	for(int i=0; i<21; i++){
		for(int j=0; j<counts[i]; j++){
			cout << 'X' ;
		}
		cout << endl;
	}
}