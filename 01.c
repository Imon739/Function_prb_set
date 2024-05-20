/*#include <stdio.h> ///   num = 01

int isPrime(int number) {        /// find prime numbers
  int i;
  for (i = 2; i * i <= number; i++) {
    if (number % i == 0) {
      return 0;
    }
  }
  return 1;
}

void findPrimes(int a, int b) {
  int i;
  for (i = a + 1; i <= b; i++) {
    if (isPrime(i)) {
      printf("%d ", i);
    }
  }
}

int main() {
  int a, b;
  printf("Enter the starting and ending numbers: ");
  scanf("%d %d", &a, &b);
  printf("The prime numbers between %d and %d are: ", a, b);
  findPrimes(a, b);
  return 0;
}*/

/*#include <stdio.h>              /// num =02

int armstrong(int number) {       /// find Armstrong or not

  int n = number;
  int sum = 0,temp;
  while (n > 0) {
    temp = n % 10;
    sum = sum + ( temp * temp * temp );
    n = n / 10;
  }
  return (sum == number);
}

int main() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  if (armstrong(number)) {
    printf("%d is an Armstrong number.\n", number);
  } else {
    printf("%d is not an Armstrong number.\n", number);
  }
  return 0;
}*/

/*#include <stdio.h>              ///    num =03

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return 0;
    return 1;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    for (int i = 2; i <= num / 2; ++i) {
        if (isPrime(i) && isPrime(num - i)) {
            printf("%d can be expressed as the sum of %d and %d.\n", num, i, num - i);
            return 0;
        }
    }

    printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    return 0;
}*/

























