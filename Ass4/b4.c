#include<stdio.h>

int fibonacci(int n){
    if (n <= 1) {
	   return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
	}
	  void printFibonacci(int n){
	       int i;
		   printf("First %d terms of Fibonacci series are: ", n);
		   for(i = 0; i < n; i++){
		       printf("%d ",fibonacci(i));
		      }
			  printf("\n");
		}

		int main() {
		    int n;
			printf("Enter the number of terms :");
			scanf("%d", &n);
			printFibonacci(n);
			return 0;
	    }



