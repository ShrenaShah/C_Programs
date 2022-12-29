#include<stdio.h>
int main()
{
    int n,sum = 0,i;
    printf("enter limit of the natural number: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        sum = i + sum; 
    }
    printf("sum of %d natural number is %d",n,sum);
    return 0;
    
}