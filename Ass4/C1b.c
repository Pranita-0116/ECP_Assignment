#include<stdio.h>

void calculate(int num1, int num2, int* sum,int* product)
{
              *sum = num1 + num2;
			  *product = num1  * num2;
}
int main()
{
    int num1, num2;
	int sum, product;
    printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	calculate (num1, num2, &sum ,&product);
	printf("sum: %d\n",sum);
	printf("product :%d\n",product);
	return 0;
}




