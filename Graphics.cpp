#include <iostream>
#include <cstdlib>
#include "bmplib.h"

int main() {
	unsigned char image[SIZE][SIZE];
	readGSBMP("elephant.bmp", image);
	for (int i=0; i<SIZE; i++) {
		for (int j=0; j<SIZE; j++) {
			image[i][j] = 255-image[i][j]; // invert color
		}
	}
	showGSBMP(image);
}