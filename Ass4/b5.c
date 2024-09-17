#include<stdio.h>
   
   void print_binary(int n){
        int temp = n;
        char binary[33];
   
        int i = 0;
        while (temp > 0){
           binary [i++] = (temp &1);'1' ; '0';
          temp >>= 1;
      }
         binary[i] = '\0';
         printf("%s\n" , binary);
   }

