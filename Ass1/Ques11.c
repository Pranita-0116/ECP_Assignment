#include<stdio.h>
#include<limits.h>
int main()
{
         printf("The range of char is [%d , %d].\n", CHAR_MIN,CHAR_MAX);
         printf("The range of unsigned char is [%u, %u].\n", 0 ,UCHAR_MAX);
         printf("The range of short int is [%hd , %hd].\n",SHRT_MIN,SHRT_MAX);	
         printf("The range of unsigned short int is [%hu , %hu].\n",0, USHRT_MAX);
         printf("The range of int is [%d , %d].\n",INT_MIN,INT_MAX);
         printf("The range of unsigned int is [%u ,%u].\n",0,UINT_MAX);
         printf("The range of long int is [%ld , %ld].\n ",LONG_MIN,LONG_MAX);
         printf("The range of unsigned long int is [%lu , %lu].\n", 0, ULONG_MAX);
return 0;
}



