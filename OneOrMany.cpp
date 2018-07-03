#include <iostream>
#include <cstdlib>
using namespace std;

// ptr can point to one int or an array of ints
// It is up to the programmer to ensure that the
// assumptions of the function writer match
// what the user passes
void set_int(int* ptr, int size) {
   *ptr = 5;   // same as ptr[0] = 5;

   if(size > 1){
      ptr[1] = 7; // only safe if
      // an array of size > 1      
   }
}

int main() {
   int val1=0, vals_array[2] = {0,0};
   
   // Pass a pointer to a single int
   set_int(&val1, 1);
   
   // Pass a pointer to an array
   set_int(vals_array, 5);
   
   // Print the results
   cout << "val1 = " << val1 << endl;
   cout << "vals_array:  " << vals_array[0] << " " << vals_array[1] << endl;
   return 0;
}