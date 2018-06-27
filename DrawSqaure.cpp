#include <iostream>
using namespace std;

/*
Define a function drawSquare that takes an integer and char parameter 
and prints a square: the integer indicates the side length of the square to draw,
and the character indicates what character to use to draw the square.
*/

void drawSquare(int,char);

int main(){
	drawSquare(5,'5');
}

void drawSquare(int side,char sym){
	for(int i=0;i < side;i++){
		for(int j = 0;j < side;j++){
			if(i == 0 || j == 0 || i == side - 1 || j == side - 1){
				cout << sym;
			}
			else{
				cout << " ";
			}
		}
		cout << endl;	
	}
}