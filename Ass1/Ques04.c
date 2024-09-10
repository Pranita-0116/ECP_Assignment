Q4.Write a prog.to print following pattern 
a.using multiple printf statements
b.using single printf statements
#include<stdio.h>
     
int main() 
{	
       int i, j, rows;
       printf("Enter the number of rows:");
       scanf("%d",&rows);
       for(i=1; i<=rows; ++i)
       {
       for(j=1; j<=i; ++j)
       {
       printf("*");
         
       printf("* *");
       }	
       printf("\n");
       }
       return 0;
}

    
