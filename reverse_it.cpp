#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[])
{
  if(argc < 2){
    cout << "Please enter the name of the file to read as an argument" << endl;
    return 1;
  }

  char buf[80];
  char buf2[80];
  ifstream myfile;
  myfile.open(argv[1]);

  // Check that the file was opened successfully by checking if
  // myfile is "good".  If it is not, exit.
  if( myfile.fail() ){
    cout << "Unable to open file: " << argv[1] << endl;
  }

  // Use a single line (function-call) to read in the line of text
  // from the file into the 'buf' array
  myfile.getline(buf,80);

  // Compute the length of the string entered by the user
  int length = 0;
  while( buf[length] != '\0' ){
    length++;
  }
  cout << length << endl;
  
  // Reverse the line of text and place it into buf2
  // Be sure you terminate buf2 with a null terminating character
  int head = 0;
  int tale = 0;
  
  // Invert the whole line
  for(int i = 0; i < length; i++){
    buf2[i] = buf[length - 1 - i];
  }
  buf2[length] = '\0';

  // Invert the word in the line
  int index = 0;
  while(buf2[index] != '\0' && index < length){
    if(buf2[index] >= 'A' && buf2[index] <= 'z'){
      head = index;  // Find the first char that is letter
      tale = head;
      while(buf2[tale] != ' ' && buf2[tale] != '\0'){  // This will find the next space
        tale++;
      }
      for(int j = head; j < (tale+head)/2; j++){ // Cut the line into words and invert the word
        char temp = buf2[j];
        buf2[j] = buf2[tale + head - 1 - j];
        buf2[tale + head -1 - j] = temp;
      }

      index = tale;  // Update the head and tale 
      head = index;
    }

    index++; // Move forward by one char, since we know this must be a space;
  }
  // Print the buf2 contents
  length = 0;
  while( buf2[length] != '\0' ){
    cout << buf2[length];
    length++;
  }
  cout << length;
  myfile.close();
  return 0;
}
