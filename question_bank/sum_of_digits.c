#include<stdio.h>
int main()
{
    int a,reminder,sum = 0;
    printf("enter any number: ");
    scanf("%d",&a);

    for(int i = 0; i<=a; i++)
    {
        reminder = a%10;
        sum = sum + reminder;
        a = a/10;
    }
    printf("sum of digits = %d",sum);
}
