/*#include<stdio.h>            /// num = 16

int func(int arr[], int n)
{
    int i;
    for(i=0;i<n;i++){
        arr[i] = arr[i] * 2;
    }
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return arr;

}
int main()
{
    int i, n;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    func(arr, n);
    return 0;
}*/

/*#include<stdio.h>            /// num = 17

int func(int arr[], int n)
{
    int i, j, temp;
    for(i=0;i<n;i++){
        for(j = i +1;j<n;j++){
            if(arr[i]>arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    return arr;

}
int main()
{
    int i, n;
    scanf("%d",&n);
    int arr[n];

    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    func(arr, n);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}*/

/*#include<stdio.h>             /// num = 18
void IsPrime(int n)
{
    int p = 1, i;
    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            p = 0;
            break;
        }
    }
    if(p == 1 && n>1){
        printf("%d is prime",n);
    }else{
     printf("%d is not prime",n);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    IsPrime(n);

    return 0;
}*/

/*#include<stdio.h>                /// num = 19

int IsPrime(int n)
{
    if(n <= 1)
        return 0;
    if(n <= 3)
        return 1;
    if(n %2 == 0 || n%3 == 0)
        return 0;

        for(int i =5; i<n;i += 6){
            if(n%i == 0 || n%(i+2) == 0){
                return 0;
            }
        }
}

void GeneratePrime(int n)
{
    printf("prime less than %d \n",n);
    for(int i = 2;i<n;i++){
        if(IsPrime(i)){
            printf("%d \n",i);
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);

    GeneratePrime(n);
    return 0;
}*/

#include<stdio.h>                /// num = 20

int IsPrime(int n)
{
    if(n <= 1)
        return 0;
    if(n <= 3)
        return 1;
    if(n %2 == 0 || n%3 == 0){
        return 0;
    }
        for(int i =5; i<n;i += 6){
            if(n%i == 0 || n%(i+2) == 0){
                return 0;
            }
        }
}

int GeneratePrime(int n)
{
    if(n<=0)
        return -1;
    int count = 0,i;
    for(i = 2;count<n;i++){
        if(IsPrime(i)){
            count++;
        }
    }
    return i-1;
}

int main()
{
    int n;
    scanf("%d", &n);

    int a = GeneratePrime(n);
    if(a == -1){
        printf("not prime");
    }else{
       printf("%dth Prime: %d",n, a);
    }
    return 0;
}












































































































