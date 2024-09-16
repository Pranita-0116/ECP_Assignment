#include<stdio.h>

int add(num1,num2)
int sub(num1,num2)
int mul(num1,num2)
int div(num1,num2)

int main()
{
       int num1, num2;
	   char = op;
	   float = div;

	   printf("Enter num1 : ");
   	   scanf("%d", &num1);
       printf("Enter the operator (+,-,*,/)");
       scanf("%c",op);
	   printf("Enter num2 :");
       scanf("%d",&num2);

	   switch(op);
	   {
	   case '+':
       add = (num1 + num2)
	   break;
       
	   case '-':
	   sub = (num1 - num2)
	   break;

	   case '*':
	   mul = (num1 * num2);
	   break;

	   case '/'
	   div = ( num1 / num2)
	   break;

	   default:
	   printf("invalid choice")
	   break;

	   printf("Enter num1,op,num2 " ,%d%c%d);
	   return 0;
}
