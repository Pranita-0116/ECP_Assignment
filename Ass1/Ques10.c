10. Write a program to calculate Area and Perimeter of Triangle for given length of three sides of
triangle. Use sqrt() function from math.h to calculate square root.


#include<stdio.h>
#include<math.h>
int main()
{
        float a,b,c,perimeter,s,Area;
		printf("Enter Three sides of Triangle\n:");
		scanf("%f%f%f",&a,&b,&c);
		perimeter = a+b+c;
		s=(a+b+c)/2;
		Area = sqrt((s*(s-a)*(s-b)*(s-c)));
		printf("perimeter of Triangle = %.2f\n",perimeter);
		printf("Area of Triangle = %.2f\n", Area);
		return 0 ;
}
