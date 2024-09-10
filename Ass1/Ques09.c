//Q9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa. Formula for
conversion is

#include<stdio.h>
int main()
{
        float Celsius,Fehrenheit;
        printf("Enter the Temprature in farenheit\n:");
        scanf("%f", &Fehrenheit);
	Celsius = 0.5*(Fehrenheit-32);
	printf("celsius temp = %f",Celsius);
      //  printf("Enter the Temprature in Fehrenheit:%f",Fehrenheit);
        return 0;
}        	


