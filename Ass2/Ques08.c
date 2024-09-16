//WAP that will calculte  the price for a quantity entered from keyboard given that the unit price is Rs 5 and there is a discount of 10%
for quantity over 30 & 15 percent discount for quantities over 50


#include<stdio.h>
int main()
{
       int quantity;
	   float price, discount;
	   printf("Enter the quantity :");
	   scanf("%d", &quantity);
	   price = quantity*5.0;
	   if (quantity > 50)
	   {
	   discount = 0.5;
	   } else if (quantity > 30)
	   {      discount = 0.1;
	   }else
	   {      discount = 0.0;
	   }
	   price = price * (1- discount);

	   printf("The price is : Rs %.2f",price);
	   return 0;
}
	   






