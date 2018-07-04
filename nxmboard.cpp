#include <iostream>
using namespace std;

// Given the values N and M, create an N row x M column
//  2D array with a checkerboard pattern

int main() {
   int n, m;
   cout << "Enter the size of the array: " << endl;
   cin >> n >> m;

   // Select the right type for the nums value which stores
   //   what is returned by ordered_array()
   int** board = new int*[n];

   for (int i=0; i < n; i++){
      board[i] = new int[m];
   }

   for (int i=0; i < n; i++) {
      for (int j=0; j < m; j++) {
         board[i][j] = (i+j)%2;
      }
   }

   for (int i=0; i < n; i++) {
      for (int j=0; j < m; j++) {
         cout << board[i][j] << " ";
      }
      cout << endl;
   }
  
   // Do your cleanup here
   for(int i=0; i<n; i++){
      delete[] board[i];
   }
   delete[] board;
   
   return 0;
}