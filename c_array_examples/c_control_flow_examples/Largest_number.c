#include<stdio.h>
int main()
{
    int number1, number2, number3;
    printf("enter 3 number: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    if(number1>number2 && number1>number3)
    {
        printf("%d",number1);
    }
    else if(number2 > number3)
    {
        printf("%d",number2);
    }
    else 
    {
        printf("%d",number3);
    }
    
    return 0;
}


