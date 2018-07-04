#include <iostream>
#include <cstring>
using namespace std;


int main() {
  // store 10 user names 
  char* names[10];
 
  char temp_buf[50];
  for(int i=0; i < 10; i++) {
    cin >> temp_buf;
    names[i] = new char[strlen(temp_buf)+1];
    strcpy(names[i],temp_buf);
  }

  // now print the names
  for(int i=0; i < 10; i++){
    cout << names[i] << " ";
  }  
  cout << endl;

  // I want to change names[0] and names[1]
  cin >> temp_buf; // user enters "Al"
  delete[] names[0];
  names[0] = new char[strlen(temp_buf)+1];
  strcpy(names[0],temp_buf);

  cin >> temp_buf; // user enters "Grace"
  delete[] names[1];
  names[1] = new char[strlen(temp_buf)+1];
  strcpy(names[1],temp_buf);

  // print the names again
  for(int i=0; i < 10; i++){
    cout << names[i] << " ";
  }  
  cout << endl;

  // now free/delete the memory you allocated
  for(int i=0; i< 10; i++){
    delete names[i];
  }
  return 0;
}