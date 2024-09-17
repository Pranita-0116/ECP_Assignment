#include <stdio.h>
#include <math.h>

int sum_of_integers(int n) {
    int sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    return sum;
}

int reverse_number(int n) {
    int reversed = 0;
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return reversed;
}

int is_palindrome(int n) {
    return n == reverse_number(n);
}


int is_armstrong(int n) {
    int original = n;
    int sum = 0;
    int digits = 0;
    int temp = n;

    
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = n;
    
    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int number;

    
    printf("Enter a number: ");
    scanf("%d", &number);

    
    int sum = sum_of_integers(number);
    printf("Sum of integers from 1 to %d is %d\n", number, sum);

   
    int reversed = reverse_number(number);
    printf("Reversed number: %d\n", reversed);

    
    if (is_palindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

    
    if (is_armstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

