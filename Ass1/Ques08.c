
Q8.Write a program to accept three integer numbers and find its average.

#include<stdio.h>

int main()
{
        int avg, n1,n2,n3;
	printf("enter the values:");
	scanf("%d%d%d",&n1,&n2,&n3);
	avg = (n1+n2+n3)/3;
	printf("avg = %d\n",avg);
	return 0;
}	


