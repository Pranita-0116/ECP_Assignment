#include<stdio.h>

      float add (float num1, float num2)
      float sub (float num1, float num2)
	  float mul (float num1, float num2)
      float div (float num1.float num2)


int main()
{
          float num1, num2, result = 0.0f
		 char op;
         printf("Enter num1(add,sub,mult,div) num2 \n");
		 scanf("%f%c%f",&num1,&op,&num2);

		 switch(op)
		 {
		 case add:
		 result = add(num1,num2)
		 break;

		 case sub:
		 result = sub(num1,num2)
         break;

		 case mult:
		 result = mul(num1,num2)
		 break;

		 case div:
		 result = div(num1,num2)
		 break;

         deafult:("invalid choice :\n");
         printf("%.2f%c%.2f = %.2f", num1,op,num2,result);
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

		 float mult(float num1, float num2)
		 {
		   return num1*num2;
         }

		 float div(float num1,float num2)
		 {
		   return num1/num2;


















