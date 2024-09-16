#include<stdio.h>
int main()
{
        int col1, col2;
		printf("input the values for x and y coordinate :");
		scanf("%d%d", &col1, &col2);
		if(col1 > 0 && col2 >0)
        printf("the coordinate point (%d,%d) lies in 1st Quadrant.\n" ,col1,col2);
        else if (col1 < 0 && col2 > 0)
		printf ("the coordinate point (%d,%d) lies in 2nd Quadrant.\n",col1,col2);
		else if (col1 > 0 && col2 > 0) 
		printf ("the coordinate point (%d,%d) lies in 3rd Quadrant.\n", col1,col2);
		else if (col1 < 0 && col2 < 0)
		printf ("the coordinate point (%d,%d) lies in 4th Quadrant.\n", col1,col2);
		else if (col1 > 0 && col2 > 0)
		printf ("the coordinate point (%d,%d) lies in 4th Quadrant .\n",col1,col2);
		else if (col1 == 0 && col2 == 0)
		printf("the coordinate point (%d,%d) lies at the origin .\n", col1, col2);
}

