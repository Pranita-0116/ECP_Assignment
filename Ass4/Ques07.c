#include<stdio.h>
 void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextterm;

	printf("Fibonacci Series: ");

	for(int i = 1; i<= n; ++i) {
	   printf("%d", t1);

	   if (i < n) {
	      printf(" ,");
	   }

	   nextterm = t1 + t2;
	   t1 = t2;
	   t2 = nextterm;
    }
  
    int main() {
      int n;

	  printf("Enter the number of terms :");
	  scanf("%d", &n);

	  printFibonacci(n);

      return 0;  
}
              
}



	  


