#include<stdio.h>
int binary(int decimal)
{
    int rem,binary = 0,weight = 1;
    while(decimal != 0)
    {
        rem = decimal % 2;
        binary = binary + weight*rem;
        weight = weight*10;
        decimal = decimal/2;
    }
    printf("%d",binary);
    return 0;
}
int decimal(int octal)
{
    int rem,decimal = 0,weight = 1;
    while(octal != 0)
    {
        rem = octal % 10;
        decimal = decimal + weight*rem;
        weight = weight*8;
        octal = octal/10;
    }
    binary(decimal);
}
int main()
{
    int octal;
    printf("enter octal number: ");
    scanf("%d",&octal);

    decimal(octal);
}