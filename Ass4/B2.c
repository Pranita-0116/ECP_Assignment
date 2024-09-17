#include<stdio.h>

int power(int base, int exponent){
    if (exponent == 0){
	   return 1;

   } else {
      return base * power(base,exponent -1);
   }
}

int main(){
    int base = 2;
	int exponent = 3;
	int result = power(base,exponent);
	printf("2^3 = %d\n", result);
	return 0;
}
