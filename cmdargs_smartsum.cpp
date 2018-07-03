#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]) {
  
  int i;

  if (argc < 2 ) {
    cout << "No input" << endl;
  }
  else {
    // if first argument is character i, add doubles
    if (argv[1][0] == 'i') {
      int sum = 0;
      for (int i=2; i< argc; i++) {
        sum += atoi(argv[i]);
      }
      cout << "Sum = " << sum << endl;
    }
    // check whether the first argument is the character d
    else if(argv[1][0] == 'd' ){
      double sum = 0;
      for(int i=2; i< argc; i++){
        sum +=  atof(argv[i]);     
      }
      cout << "Sum = " << sum << endl;
    }
    else {
      cout << "Invalid data type to sum" << endl;
    }
  }
  return 0;
}