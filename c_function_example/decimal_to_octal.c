#include<stdio.h>
int octal(int decimal)//123
{
    int rem,octal = 0,weight = 1;
    while (decimal != 0)
    {
        rem = decimal % 8;
        octal = octal + weight*rem;
        decimal = decimal/8;
        weight = weight*10;
    }
    printf("%d",octal);
    return 0;
}
int main()
{
    int decimal;
    printf("enter decimal number: ");
    scanf("%d",&decimal);

    octal(decimal);
}