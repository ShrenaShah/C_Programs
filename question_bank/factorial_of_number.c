#include<stdio.h>
int main()
{
    int a,fact = 1;
    printf("enter any number: ");
    scanf("%d",&a);

    for(int i = 1; i<=a; i++)
    {
        fact = fact*i;
    }
    printf("factorial of given number is %d",fact);
    return 0;
}