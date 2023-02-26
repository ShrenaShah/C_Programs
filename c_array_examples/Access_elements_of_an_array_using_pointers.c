#include<stdio.h>
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d", &number);

    printf("your given number is %d: ", *(&number));
}