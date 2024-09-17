#include<stdio.h>

void print_pascal_triangle(int n)
{
     int i, j, k = 1;
	 for (i = 0; i <n;  i++){
         for (j = 0; j <= i; j++){
		      if (j == 0 || j== i)
			      printf("1");
		      else
			      printf("%d ", c (k-1));
				          k++;
			    }
				printf("\n");
			}
	 }
	 int c(int n) {
	     if(n == 0)
		    return 1;
		 else 
		     return c(n-1) * (n+1) / n;
	 }

	  int main(){
	      int n;
		  printf("Enter the number of rows: ");
		  scanf("%d", &n);
		  print_pascal_triangle(n);
		  return 0;
	}

