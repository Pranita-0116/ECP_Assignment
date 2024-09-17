#include<stdio.h>

        float add(float num1,float num2)
		float sub(float num1,float num2)
		float mul(float num1,float num2)
		float div(float num1,float num2)
int main()
{
     		float num1,num2
	    	char (op);

              printf("enter [num1](+,-,*,/)[num2] :\n ");
			  scanf("%f%c%f" ,&num1,&op,&num2);
			  (result==0)
			  (flag ==0)

			  switch(op)
			  {
			  case '+':
			  result = add(num1+num2);
              break;

			  case '-':
			  result = sub(num1-num2);
			  break;

			  case '*':
			  result = mul(num1*num2);
			  break;

			  case '/':
			  result = div(num1/num2);
			  break;

			  default:
			  printf("invalid choice");
			  }
			  printf("%f%c%f = %f",num1,op,num2,result);
              
			  return 0;
}             
            
              float add(float num1,float num2)
   			  {
			     return num1+num2; 	     		 
			  }

			  float sub(float num1,float num2)
    		  {
			     return num1-num2;
		   	  }

			  float mul(float num1,float num2)
			  {  
			       return num1*num2;
              }

              float div(float num1,float num2)
			  {
			        return num1/num2;
              }







