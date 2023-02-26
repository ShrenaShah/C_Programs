#include<stdio.h>
int main()
{
    int n,count = 0;
    printf("enter number: ");
    scanf("%d",&n);
    while (n>0)
    {
        n = n/10;
        count = count + 1;
    }
    printf("digit of given number is %d",count);
    return 0;
    
}