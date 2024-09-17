#include<stdio.h>
int fibonacci(int n);

int main(){
    int i, num;
    
	printf("Enter the number  of terms :");
	scanf("%d", &num);

	printf("Fibonacci series: ");

	for (i = 1; i<= num; i++) {
	     printf("%d" ,fibonacci(i));
	}
	 return 0;
}

int fibonacci(int n) {
    static  int a = 0, b = 1;

	if (n == 1){
	   return a;
    } else if (n == 2){
	   return b;
	} else {
	   int temp = a + b;
	   a = b;
	   b = temp;
	   return temp;
    }
}




