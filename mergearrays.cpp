/*
Complete the function merge() to merge two arrays of length n,
passed as src1 and src2 into an output array dest. 
You should alternate items from the src1 array and the src2 array
*/

#include <iostream>
using namespace std;

void merge(int src1[], int src2[], int len, int dest[])
{
	int count = 0;
	for(int i=0;i<2*len;i=i+2){
		dest[i] = src1[count];
		dest[i+1] = src2[count];
		count++;
	}
}
int main() {
	int a1[] = {1, 3, 5, 7};
	int a2[] = {2, 4, 6, 8};
	int a3[8];
	// These are 0-length arrays to make sure you coded things correctly
	int *a4 = NULL, *a5 = NULL, *a6 = NULL;

	// test your function
	merge(a1, a2, 4, a3);

	for(int i=0; i < 8; i++){
		cout << a3[i] << " ";
	}
	cout << endl;

	// pass in 0-length arrays
	merge(a4, a5, 0, a6);
	return 0;
}