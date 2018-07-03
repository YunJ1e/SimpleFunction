#include <iostream>
using namespace std;

// compute product by treating a as an array
double product1(double* a, int n) {
   double running_product = 1;
   for (int i=0; i<n; i++) {
      running_product *= a[i];
   }
   return running_product;
}

// compute product by increasing a by one position at a time
double product2(double* a, int n) {
   double running_product = 1;
   while (n > 0) {
      // multiply in the next number
      running_product *= *a;
      a++;
      // increase the pointer by one position
      n--; // one less number to go
   }
   return running_product;
}

int main() {
   double sample_inputs[3] = {2.5, -1.0, 3.0};
   // product of all the numbers?
   cout << product1(sample_inputs, 3) << endl;
   // try another way
   cout << product2(sample_inputs, 3) << endl;
   return 0;
}