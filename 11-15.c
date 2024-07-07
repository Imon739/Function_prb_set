/*#include<stdio.h>          /// num = 11

void func(char str[])
{
    int i, len = 0;
    while(str[i] != '\0'){
        i++;
        len++;
    }
    printf("%d",len);
}
int main()
{
    char str[100];
    gets(str);

    func(str);

}*/

/*#include<stdio.h>                     /// num = 12
void func(int num1, int num2)
{
    int temp ;
    if(temp == 0){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    printf("Value in function : %d %d\n", num1, num2);
}
int main()
{
    int num1, num2;
    scanf("%d %d",&num1, &num2);

    printf("Value in main : %d %d", num1, num2);

    func(num1, num2);
}*/


/*#include<stdio.h>                     /// num = 13
void func(int *num1, int *num2)
{
    int temp ;
    if(temp == 0){
        temp = *num1;
        *num1 = *num2;
        *num2 = temp;
    }
    printf("Value in function : %d %d\n", *num2, *num1);
}
int main()
{
    int num1, num2, temp;
    scanf("%d %d",&num1, &num2);
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("Value in main : %d %d\n", num1, num2);

    func(&num1, &num2);
    return 0;
}*/

/*#include<stdio.h>            /// num = 14

void func(int n)
{
    int arr[n],i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i] %2 == 0){
                printf("%d ", arr[i]);
    }
    }
}
int main()
{
    int n,i;
    scanf("%d",&n);

    func(n);
    return 0;
}*/

/*#include<stdio.h>            /// num = 15

void func(int n)
{
    int arr[n],i,min;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min = arr[0];
    for(i=1;i<n;i++){
        if(arr[i] < min ){
                 min = arr[i];
                    printf("%d ", arr[i]);

    }

    }
}
int main()
{
    int n;
    scanf("%d",&n);

    func(n);
    return 0;
}
*/

























































































