#include<stdio.h>
int fact(int);
int main(void)
{
        int num,factorial;
		printf("Enter a num : \n");
		scanf("%d", &num);
		factorial=fact(num);
		printf("The factorial of %d is %d\n",num,factorial);
}

int fact(int num)
{

      int i,f=1;
      for(i=1; i<=num; i++)
      {
	        f=f*i;

      }
	  return f;
}


