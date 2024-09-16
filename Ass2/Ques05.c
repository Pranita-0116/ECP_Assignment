WAP to display Maximum of three numbers using 1.if - else operator
                                            2.conditional operator

#include<stdio.h>
int main()
{
    int n1,n2,n3,max;
	printf("Enter three numbers :");
    scanf("%d%d%d",&n1,&n2,&n3);
	if(n1>n2 && n1>n3)
	max = n1;
	else if (n2>n3)
    max = n2;
	else 
	max = n3;
	printf("Largest number is : %d",max);
	return 0;
}
	
