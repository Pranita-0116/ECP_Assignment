input a number and display number whether is even or odd.

#include<stdio.h>
int main()
{
       int num;
       printf("Enter the num:");
	   scanf("%d",&num);
	   if(num % 2 == 0)
	       printf("num is Even:\n");
	   else
          printf("num is Odd:\n");
return 0;
}
