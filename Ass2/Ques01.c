write a programme to accept numbers & display division of the two numbers.check for divide by zero error.if divider is zero then display error message. 

#include<stdio.h>
int main()
{
int n1,n2;
float  z;
printf("Enter the value:\n");
scanf("%d",&n1);
printf("Enter the value:\n");
scanf("%d",&n2);
if (n2 == 0)
    printf("Division by zero\n");
	else 
	{
	z = n1 / n2;
	printf ("%f", z);
	}
	return 0;
}


