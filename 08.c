/*#include <stdio.h>          /// num = 08

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return 1 / (base * power(base, -exponent - 1));
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("%.2lf raised to the power of %d is: %.2lf\n", base, exponent, result);

    return 0;
}*/

/*#include <stdio.h>           /// num = 09

int binaryToDecimal(int binary) {
    int decimal = 0, base = 1;
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    return decimal;
}

void decimalToBinary(int decimal) {
    if (decimal > 0) {
        decimalToBinary(decimal / 2);
        printf("%d", decimal % 2);
    }
}

int main() {
    int choice, num;

    printf("Choose conversion:\n");
    printf("1. Binary to Decimal\n");
    printf("2. Decimal to Binary\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter a binary number: ");
        scanf("%d", &num);
        printf("Decimal equivalent: %d\n", binaryToDecimal(num));
    } else if (choice == 2) {
        printf("Enter a decimal number: ");
        scanf("%d", &num);
        printf("Binary representation: ");
        decimalToBinary(num);
        printf("\n");
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}*/

/*#include <stdio.h>       /// num = 10

void getMultipleValues(int a, int b, int *sum, int *product) {
    *sum = a + b;
    *product = a * b;
}

int main() {
    int num1, num2, sum, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    getMultipleValues(num1, num2, &sum, &product);

    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}*/

