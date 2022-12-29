#include<stdio.h>
int main()
{
    int interval1, interval2;
    printf("enter intervals: ");
    scanf("%d%d",&interval1,&interval2);

    for(int interval = interval1; interval <= interval2; interval++)
    {
        int temp = interval;
        int original = interval;
        int digit, result = 0;
        while(temp != 0)
        {
            digit = temp % 10;
            result += digit*digit*digit;
            temp /= 10;
        }
        if (original == result)
        {
            printf("%d\n", original);
        }
        result = 0;
    }
    return 0;
}