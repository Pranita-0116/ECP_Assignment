//WAP to accept five digit number and check whether it is palindrome.

#include<stdio.h>
#include<limits.h>
int main()
{
       int num,rem,i,rev = 0,num1,count = 0;
	   printf("Enter a five digit number :\n");
	   scanf("%d",&num);
	   num1 = num;
	   while(num>0)
	   rem = num%10;
	   rev = rem+rev*10;
	   num = num/10;
	   count++;
	   if(count==5)
	   if(num1==rev)
	   printf("The given no is palindrome",num1);
	   else
	   printf("The given %d number is not a five is if number:",num1);
	   return 0;
}
