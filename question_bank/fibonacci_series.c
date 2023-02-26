#include<stdio.h>
int main()
{
    int a,sum = 0;
    printf("enter limit of series: ");
    scanf("%d",&a);

    for(int i = 0; i<=a; i++)
    {
        sum = sum + i;
        for(int i = 0; i<=0; i++)
        {
            printf("%d\t",sum);
        }
    }
    return 0;
}