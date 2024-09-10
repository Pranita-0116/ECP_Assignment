//Print the ASCII value of user entered character in Decimal,hex,octal format and also print the character for user entered ASCII value.
#include<stdio.h>
    
    int main()
{
    char ch;
    printf("Enter the character:");
    scanf("%c",&ch);
    printf("Enter Decimal value of character%d\n",ch);
    printf("Enter Hexadecimal value of character%X\n",ch);
    printf("Enter octal value of character%o\n",ch);
    printf("Enter character value of character%c\n",ch);
    printf("%c",ch);
    return 0;
} 


