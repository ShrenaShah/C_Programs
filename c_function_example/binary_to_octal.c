#include<stdio.h>
int octal(int decimal) //41
{
    int octal = 0, rem, weight = 1;
    while (decimal != 0)//41
    {
        rem = decimal % 8;
        octal = octal + weight*rem; 
        weight = weight*10; 
        decimal = decimal / 8;
    }
    printf("%d",octal);
    return 0;
}
int decimal(int binary)
{
    int decimal = 0, rem, weight = 1;
    while (binary != 0)//101001 10100 1010 101 10 1 0
    {
        rem = binary % 10; //1 0 0 1 0 1
        decimal = decimal + weight*rem;//1 1 1 9 9 41
        weight = weight*2; //2 4 8 16 32 64
        binary = binary / 10;//10100 1010 101 10 1 0
    }
    octal(decimal);
}
int main()
{
    int binary;
    printf("enter binary number: ");
    scanf("%d", &binary);

    decimal(binary);
}