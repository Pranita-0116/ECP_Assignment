#include<stdio.h>
int main()
{
        int emp_id, dept_no;
		char dc;
      
	   printf("Enter the emp_id :");
	   scanf("%d", &emp_id);
	   printf("Enter the dept_no :");
	   scanf("%d", &dept_no);
	   printf("Enter designation_code :");
	   scanf("%*c%c", &dc);
       
	   switch(dept_no)
       {
          case 1 :
		  printf("Employee with emp id : %d working in marketing dept :");
		  break;

		  case 2 :
          printf("Employee with emp id : %d  working in management dept :");
		  break;

		  case 3:
		  printf("Employee with emp id : %d working in sales dept :");
		  break;

		  case 4:
		  printf("Employee with emp id : %d working in designing dept :");
		  break;

		  default:
		  printf("invalid dept number \n");
       }

	     switch (dc)
	    {
		 case 'M': printf(" as a manager \n");
		 break;
		 case 'S': printf(" as a supervisor \n");
		 break;
		 case 's': printf(" as a security officer \n");
		 break;
		 case 'C': printf(" as a clerk \n ");
         
		 default :
		 printf("Invalid designation code :");
         }
 return 0;
 }



