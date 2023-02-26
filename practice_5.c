#include<stdio.h>
int main()
{
    // int n,fact = 1;
    // printf("enter number: ");
    // scanf("%d",&n);

    // for(int i = n; i>=1; i--)
    // {
    //     fact = fact*i;
    // }

    //  printf("factorial of given number is %d",fact);
    //  return 0;

    int i,sum = 0;
    for(int i = 5; i<=50; i++)
    {
        sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}