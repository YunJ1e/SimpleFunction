#include <iostream>
using namespace std;
/*

Define two functions named rangesize. 
int rangesize(int start, int end) 
This function should return the number of integers in the set 
{start,start+1,…,end}, which is end - start + 1. 
double rangesize(double start, double end) 
This function should return the length of the interval 
[start,end]of real numbers, which is end - start. 

*/

int rangesize(int,int);
double rangesize(double,double);

int main(){
	cout << rangesize(10, 20) << endl; // 11
	cout << rangesize(3.4, 6.2) << endl; // 2.8
	cout << rangesize(8, 30) << endl; // 23
	cout << rangesize(8.0, 30.0) << endl; // 22.0
}




int rangesize(int start,int end){
	return end - start + 1;
}
double rangesize(double start,double end){
	return end - start; 
}
