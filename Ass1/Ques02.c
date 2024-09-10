//Write a prog.to accept a number and print the number in character,decimal,octal and hex formats
#include<stdio.h>
     
    int main()
{
   	 int n1;
   	 printf("Enter the number:");
	scanf("%d", &n1);
	printf("Enter the number in Decimal%d\n",n1);
	printf("Enter the number in octal%o\n",n1);
	printf("Enter the number in hexadecimal%X\n",n1);
	printf("Enter the number in character%c\n",n1);
	return 0;
}


