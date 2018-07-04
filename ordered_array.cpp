#include <iostream>
using namespace std;
//  return a new, dynamically allocated integer array of
//  size n with values 1 to n stored in it
int* ordered_array(int n) {
  int* data =new int[n];
  for(int i=0; i<n; i++){
    data[i] = i+1;
  }
  return data;
}

int main() {
  int n;
  cout << "Enter the size of the array: " << endl;
  cin >> n;

  // Select the right type for the nums value which stores
  // what is returned by ordered_array()
  int* nums = ordered_array(n);

  for (int i=0; i < n; i++) {
    cout << nums[i] << " ";
  }
  cout << endl;

  // Do any other final work before exiting
  delete[] nums;
  return 0;
}