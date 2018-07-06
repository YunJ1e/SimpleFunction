/* ACSII Arts */

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	// Create the isosceles right triangle
	char unit = '*';
	for(int i=0; i<5; i++){
		for(int j=0; j<i+1; j++){
			cout << unit ;
		}
		cout << endl;
	}
	// Create the right triangle with a cliff
	int degree;
	cin >> degree;
	double radian = degree * M_PI / 180;
	int ratio = round(tan(radian));
	int temp;
	for(int i=0; i<10; i++){
		if(i>=8 || i<=5){
			for(int j=0; j<(i+1)*ratio; j++){
				cout << unit;
			}
			temp = i;
		}
		else{
			for(int j=0; j<i*ratio; j++){
				cout << unit ;
			}
		}
		cout << endl;
	}

}