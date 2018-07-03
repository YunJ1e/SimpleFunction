#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char* argv[]) {

  if (argc<4 || argc>4) {
    cout << "wrong number of arguments" << endl;
  }
  else {
  // if first argument starts with 'i', divide integers
    if (argv[1][0] =='i') {
      // parse arguments as integers
      int x = atoi(argv[2]);
      int y = atoi(argv[3]);
      // divide and print
      cout << x/y <<endl;
    }
    else {
    // parse as doubles, divide and print
      double x = atof(argv[2]);
      double y = atof(argv[3]);
      cout << x/y <<endl;
    }
  }
  return 0;
}