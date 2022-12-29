#include<stdio.h>
int main()
{                                                       
    int n,fact=0;
    printf("enter the number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact = fact + i;
    }
    printf("factorial of given number is %d",fact);
    printf("\nThank You");
    return 0;
}