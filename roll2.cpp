#include <iostream>
#include <cstdlib>
using namespace std;

// Takes pointer to integer and changes the pointed-at value
// to be a random number between 1 and 6
void roll_one(int* die) {
   *die = 1 + rand()%6; 
}

// Takes two pointers to integers and changes the pointed-at values
// to be random numbers between 1 and 6
void roll_two(int* die1, int* die2) {
// Call the roll_one() function twice to set die1 & die2
   roll_one(die1);
   roll_one(die2);
}

int main() {
   int d1=0, d2=0;  // two integers representing dice values
   cout << "Before: d1 is " << d1 << " and d2 is " << d2 << endl;

   srand(0); // not acutally random, to facilitate testing

// We want to change the contents of d1 and d2 in the function
// roll_one().  But we will first pass them through roll_two()
// which will call roll_one() twice...once for each die

// Pass appropriate values for d1 and d2 as the arguments 
   roll_two(&d1, &d2);

// d1 and d2 should be changed by the previous call to roll_two()
// so let's check their value.
   cout << "After: d1 is " << d1 << " and d2 is " << d2 << endl;
   return 0;
}