/* 2D Arrays & Image Processing */

#include <iostream>
#include <cstdlib>
#include <cmath>
#include "bmplib.h"

// global variable. bad style but ok for this lab
unsigned char image[SIZE][SIZE];

// Draw four sides of the rectangle
void draw_rectangle(int top, int left, int height, int width) {
	for(int i=top; i<(top+height); i+=1){
		for(int j=left; j<(left+width); j+=1){
			if(i==top|| i==top+height-1|| j==left || j==left+width-1){
				image[i][j] = 0;
			}
		}
	}
}

// Ellipse
void draw_ellipse(int cy, int cx, int height, int width) {
	int rx = height/2; 
	int ry = width/2;	// ELements in the ellipse equation

	for(int theta=0;theta< 360; theta++){
		int xx= cx + rx * cos(theta * M_PI / 180); // starting_x + cos(radian)
		int yy= cy + ry * sin(theta * M_PI / 180); // starting_y + sin(radian)
		image[xx][yy] = 0;
	}
}


int main() {
	// initialize the image to all white pixels
	for (int i=0; i < SIZE; i++) {
		for (int j=0; j < SIZE; j++) {
			image[i][j] = 255;
		}
	}
	// Instructions
	std::cout << "To draw a rectangle, enter: 0 top left height width" << std::endl;
	std::cout << "To draw an ellipse, enter: 1 cy cx height width" << std::endl;
	std::cout << "To save your drawing as output.bmp and quit, enter: 2" << std::endl;
	
	// Baesd on the inputs to initialize the int array
	// In case the user enters the wrong argument, it wll end the for loop.
	int temp[5] = {0};
	for(int i=0; i<5; i++){
		std::cin >> temp[i];
		if(temp[0] > 2 || temp[0] < 0){
			std:: cout << "Please follow the instructions and re-run the program." << std:: endl;
			break;
		}
	}
	// Only when the first element of the array is located between 0~2,
	// it will enter the while loop.
	while(temp[0] <= 2 && temp[0] >= 0){
		if(temp[0] == 0){
			draw_rectangle(temp[1],temp[2],temp[3],temp[4]);
		}
		else if(temp[0] == 1){
			draw_ellipse(temp[1],temp[2],temp[3],temp[4]);	
		}
		for(int i=0; i<5; i++){
			std::cin >> temp[i];
			if(temp[0] == 2){
				break;
			}
			else if(temp[0] > 2 || temp[0] < 0){
				std:: cout << "Please follow the instructions and re-run the program." << std:: endl;
				break;
			} 
		}
	}
	writeGSBMP("output.bmp", image);
	showGSBMP(image);
	return 0;
	
}