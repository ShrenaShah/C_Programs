#include<stdio.h>

int fact(int number)
{
    if(number != 0)
    {
        return number + fact(number - 1);
    }
    else
    {
        return number;
    }
}
int main()
{
    int number;
    printf("enter a number: ");
    scanf("%d",&number);

    fact(number);

    printf("factorial of number %d",fact(number));
}
