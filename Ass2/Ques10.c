#include<stdio.h>
int main()
{
       char c;
	   printf("Enter a character :");
	   scanf("%c", &c);

	      if (c >= 'A' && c<= 'Z') {
	       printf("The character is an uppercase letter.\n");

	     } else if (c >= 'a' && c <= 'z'){
	      printf("The character is an lowercase letter .\n");
 
	      } else if (c >= '0' && c <= '9'){
	        printf("The character is a digit.\n");

	       } else if (c == ' '){
	        printf("The character is a space.\n");
	   
	       } else if (c == '\t'){
           printf("The character is a tab.\n");
	   
	       }  else if (c == '\r'){
            printf("The character is a carriage return.\n");

	       } else if(c == '\n'){
	         printf("The character is a new line.\n");
            } else {
	         printf("The character is a special character.\n");
	        }
        return 0;
}


