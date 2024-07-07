/*#include <stdio.h>     /// num = 04

int sumOfNaturalNumbers(int n) {
    if (n == 0)
        return 0;
    else
        return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int num;
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int result = sumOfNaturalNumbers(num);
        printf("Sum of natural numbers from 1 to %d is: %d\n", num, result);
    }

    return 0;
}*/

/*#include <stdio.h>           /// num = 05

unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        unsigned long long result = factorial(num);
        printf("Factorial of %d is: %llu\n", num, result);
    }

    return 0;
}*/

/*#include <stdio.h>             /// num = 06

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Please enter positive integers.\n");
    } else {
        int result = gcd(num1, num2);
        printf("GCD of %d and %d is: %d\n", num1, num2, result);
    }

    return 0;
}*/


/*#include <stdio.h>              num = 07

void reverseSentence() {
    char c;
    scanf("%c", &c);

    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}

int main() {
    printf("Enter a sentence: ");
    reverseSentence();
    printf("\n");

    return 0;
}*/
























