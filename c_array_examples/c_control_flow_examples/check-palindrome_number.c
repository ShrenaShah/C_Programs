#include<stdio.h>
int main()
{
    int number,reverse = 0,reminder,number1;
    printf("enter the number: ");
    scanf("%d", &number);
    number1 = number;

    while (number != 0 )
    {
        reminder = number % 10;
        reverse = reverse*10 + reminder;
        number /= 10;
    }

    if(number1 == reverse)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }
    return 0;
}