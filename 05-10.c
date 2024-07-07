/*#include<stdio.h>              /// num = 05
void func(int num1, int num2)
{
    if(num1 > num2){
        printf("%d is greater than %d",num1, num2);
    }else if(num1 < num2){
    printf("%d is less than %d",num1, num2);
    }else{
       printf("%d is equal to %d",num1, num2);
    }
}

int main()
{
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    func(num1, num2);
    return 0;
}*/

/*#include<stdio.h>                       /// num = 06
void func(int num1, int num2, int num3)
{
    int sum = 0;
    sum = num1 + num2 + num3;
    printf("Sum in Function = %d\n",sum);
}

int main()
{
    int num1, num2, num3;
    scanf("%d %d %d", &num1, &num2, &num3);
    int sum = 0;
    sum = num1 + num2 + num3;
    func(num1, num2, num3);
    printf("Sum in main = %d",sum);
    return 0;
}*/


/*#include <stdio.h>                   /// num = 07

void func(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
   printf("Sum In Function: %d\n", sum);
}

int main() {
    int n, sum = 0;

    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    func(arr, n);
    printf("Sum In Main: %d\n", sum);

    return 0;
}*/

/*#include<stdio.h>            /// num = 08
void func(int arr[], int n)
{
  int i;
  for(i=n-1;i>=0;i--){
    printf("%d ",arr[i]);
  }
}

int main()
{
    int i, n;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    func(arr, n);
}*/

/*#include<stdio.h>              /// num = 09

void func(int n)
{
    int fact = 1, i;
    for(i=1;i<=n;i++){
        fact = fact * i;
    }
    printf("Factorial = %d",fact);
}
int main()
{
    int n;
    scanf("%d",&n);

    func(n);
}*/

/*#include<stdio.h>              /// num = 10
void func(int x, int y)
{
    int p = 0;
    for(int i=1; i<=x ;i++){
        p = pow(x,y);
    }
    printf("%d",p);
}
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    func(x, y);

}*/






































































































