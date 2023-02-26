#include<stdio.h>
int main()
{
    int n,sum = 0;
    printf("enter the limit of the series: ");
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
        sum = i + sum;

           for(int i = 0;i<=0;i++)
           {
              printf("%d\t",sum);
           }
    }
    return 0;
}
