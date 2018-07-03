#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main( int argc, char* argv[] ) {

  int i;

  if(argc < 2){
    cout << "No input" << endl;
  }
  else {
    // check whether the first argument is "integer"
    if(strcmp(argv[1],"integer") == 0){
      int sum = 0;
      for(i=2; i<argc; i++ ){
        sum += atoi(argv[i]);
      }
      cout << "Sum = " << sum << endl;
    }
    // check whether the first argument is "double"
    else if(strcmp(argv[1],"double") == 0){
      double sum = 0;
      for(i=2; i< argc; i++ ){
        sum += atof(argv[i]);
      }
      cout << "Sum = " << sum << endl;
    }
    else {
      cout << "Invalid data type to sum" << endl;
    }
  }
  return 0;
}