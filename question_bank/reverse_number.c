#include<stdio.h>
int main()
{
    int a, reverse;
    printf("enter any number: ");
    scanf("%d",&a);

    for(int i = 0; i<=a; i++)
    {
       reverse = a%10;
       a/=10; 
       printf("%d",reverse);
    }
    return 0;
}