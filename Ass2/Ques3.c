\\write a programme to display number is +ve,-ve, zero

#include<stdio.h>
int main()
{
        int num;
		printf("Enter the num :");
		scanf("%d",&num);
		if(num>0)
		printf("Enter num is +ve:");
		else
	    if(num<1)
		printf("Enter num is -ve:");
	    else
		if(num=0)
		printf("Enter num is zero:");
		return 0;
}
