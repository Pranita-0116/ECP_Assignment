#include<stdio.h>

int main()
{
     int week;
	 printf("Enter week number(1-7):");
	 scanf("%d", &week);

	 switch(week)
	 {
	    case 1:
		  printf("Monday");
	      break;
        
		case2:
          printf("Tuesday");
          break;

	   	case 3:
           printf("Wednesday");
		   break;

	    case 4:
          printf("Thursday");
		  break;
 
   	    case 5:
		  printf("Friday");
		  break;

	    case 6:
    	  printf("Saturday");
          break;
            
  	    case 7:
		  printf("Sunday");
	      break;

         default:
	     printf("Invalid input! Please Enter week number 1-7.");
				break;
      }
return 0;
}


