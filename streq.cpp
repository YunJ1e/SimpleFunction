/*
Define a function streq that takes two character arrays as input, 
and checks whether they are equal (contain the same text). 
*/
#include <iostream>
using namespace std;
bool streq(char* src1, char* src2){
	int i = 0;
	while(1){
		if(src1[i] == '\0' && src2[i] == '\0'){
			return true;
		}
		else{
			if(src1[i] != src2[i]){
				return false;
			}
			i++;
		}
	}
}

int main(){
   char src1[12] = "hello world";
   char src2[12] = "hello world";
   char src3[1]  = "";
   char src4[12] = "hello world";
   char src5[12] = "HELLO WORLD";
   if(streq(src1,src2)){cout << "12" <<endl;}
   if(streq(src1,src3)){cout << "13" <<endl;}
   if(streq(src1,src4)){cout << "14" <<endl;}
   if(streq(src1,src5)){cout << "15" <<endl;}
   if(streq(src2,src3)){cout << "23" <<endl;}
   if(streq(src2,src4)){cout << "24" <<endl;}
   if(streq(src2,src5)){cout << "25" <<endl;}
   if(streq(src3,src4)){cout << "34" <<endl;}
   if(streq(src3,src5)){cout << "35" <<endl;}
   if(streq(src4,src5)){cout << "45" <<endl;}
}