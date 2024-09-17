#include<stdio.h>
#include<stdlib.h>

#define ERROR_OK 0
#define ERROr_DIV_BY_ZERO 1		

     int calculate(int a, int b, char op, int*result, int* error_code) {
     *error_code = ERROR_OK;
      
	  switch (op) {
	       case '+':
		   *result = a + b;
		   break;

	       case '-':
		   *result = a - b;
		   break;
           
		   case '*':
		   *result = a * b;
		   break;

		   case '/':
		     if (b == 0) {
			     *error_code = ERROR_DIV_BY_ZERO;
				 *result = 0;

				 } else {
				     *result = a/b;
				 }
	             break;
		   default:
		       *error_code = ERROR_OK;
			   *result = 0;
			   break;
     }

	 return *error_code;
 }

 int main() {
     int a, b, result;
	 int error_code;

	 printf("Enter two  numbers: ");
	 scanf("%d %d" , &a, &b);

	 error_code = calculate(a, b,'/', &result);
	 if (error_code == ERROR_Ok) {
	     printf("Result: %d\n",result);

		} else if (error_code == ERROR_DIV_BY_ZERO) {
		          printf("Error: Division by zero\n");

				  } else {
				      printf("Error: Invalid operation\n");
				  }

				  return 0;
		}

      

