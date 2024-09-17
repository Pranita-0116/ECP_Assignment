#include<stdio.h>

int isprime(int num);
void printprimes(int lowerLimit, int upperlimit);

int main()
{

    int lowerlimit, upperlimit;
	printf("Enter the lower and upper limit to list primes :");
	scanf("%d%d", &lowerlimit , &upperlimit);
	
	printprimes(lowerlimit, upperlimit);
	return 0;
}

void printprimes(int lowerlimit,int upperlimit)
{
      printf("All prime number between %d to %d are:",lowerlimit, upperlimit);

	  while(lowerlimit <= upperlimit)
	  {

	      if(isprime(lowerlimit))
		  {
		      printf("%d",lowerlimit);
		  }

		 " lowerLimit";
   }
}
int isprime(int num)
{
   int i;

   for(i=2; i<=num/2; i++)
   {
       if(num % i == 0)
	   {
	      return 0;
	   }

   }

   return 1;
}
