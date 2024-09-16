write a programme to display no of days in given month & year using switch case statement.

#include<stdio.h>
int main()
{
        int month,year;
		printf("Enter month,year :");
		scanf("%d%d", &month,&year);
		
		
		switch(month)
		{
		case 1:
		     printf("Jan - 31 days");
			 break;
		case 2:
		     printf("Feb - 28 days");
			 break;
		case 3:
		     printf("Mar - 31 days");
			 break;
       	    case 4:
		     printf("Apr - 30 days");
			 break;
	    case 5:
		     printf("May - 31 days");
			 break;
		case 6:
		     printf("June - 30 days");
			 break;
		case 7:
		     printf("July - 31 days");
			 break;
	    case 8:
		     printf("Aug - 31 days");
			 break;
		case 9:
		     printf("Sept - 30 days");
			 break;
		case 10:
		     printf("Oct - 31 days");
			 break;
		case 11:
		     printf("Nov - 30 days");
			 break;
		case 12:
		     printf("Dec - 31 days");
			 break;
        default:("Invalid choice!  enter month : ") ;
        }


		switch(year)
		{
		case 1:'2021';
		break;
		case 2:'2022';
		break;
		case 3:'2023';
		break;
		case 4:'2024';
		break;
		default:("Invalid choice!  enter year :");
		}
return 0;
}

		 


		     

