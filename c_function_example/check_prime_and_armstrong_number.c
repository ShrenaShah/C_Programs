#include<stdio.h>
#include<math.h>

int prime(int number)
{
    int flag = 0;
    for(int i = 2; i < number; i++)
    {
        if(number % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("Not Prime\n");
    }
    else{
        printf("Prime\n");
    }
}

int armstrong(int number)
{
    int digit, sum = 0, original;
    original = number;
    while(number != 0)
    {
        digit = number % 10;
        sum = sum + (digit * digit * digit);
        number = number / 10;
    }
    if(sum == original)
    {
        printf("Armstrong");
    }
    else{
        printf("Not Armstrong");
    }
}

int main()
{
    int number;

    printf("enter number: ");
    scanf("%d", &number);   

    prime(number);
    armstrong(number);
    return 0;
}

