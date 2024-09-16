\\WAp to display no of days is given month and year using 
1.using if else ladder
2.using logical operator 

#include<stdio.h>
int main()
{
        int month = 12, year = 2012;
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		printf("Number of days is 31 days.");
		break;
		// cases for 30 days
		case 4:
		case 6:
		case 9:
		case 11:
        printf("Number of days is 30 days.");
		break;
		// case  for 28/29 days
		case 2:
		     if((year%400==0) || ((year%100!=0)&&(year%4==0)))
		printf("Number of days is 29");
        else printf("Number of days is 28");
		break;

	    default:
		     printf("Invalid month.");
             break;
        }
return 0;
}
  
   






