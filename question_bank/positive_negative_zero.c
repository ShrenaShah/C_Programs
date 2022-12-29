#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);

    if(a > 0)
    {
        printf("given number is positive");
    }
    else if(a < 0)
    {
        printf("given number is negative");
    }
    else
    {
        printf("zero");
    }
     return 0;
}