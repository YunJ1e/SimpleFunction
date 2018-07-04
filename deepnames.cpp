#include <iostream>
#include <cstring>
using namespace std;

int main() {
   // store 10 user names 
   // names type is a char**
   char* names[10];
   char temp[50];
 
   for (int i=0; i < 10; i++) {
      cin >> temp;
      char* new_region = new char[strlen(temp) + 1];
      names[i] = new_region; // shallow copy(address)
      strcpy(names[i],temp); // deep copy(each character)
   }

  // now print the names
   for (int i=0; i < 10; i++) {
      cout << names[i] << " ";
   }  
   cout << endl;
   // now free/delete the memory you allocated
   for (int i=0; i < 10; i++) {
      delete[] names[i];
   } 
   return 0;
}