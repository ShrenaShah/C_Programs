#include<stdio.h>

int decimal(int octal)
{
    int rem,decimal = 0,weight = 1;
    while(octal != 0)
    {
        rem = octal % 10;
        decimal = decimal + weight*rem;
        octal = octal/10;
        weight = weight*8;
    }
    printf("%d",decimal);
    return 0;
}
int main()
{
    int octal;
    printf("enter octal number: ");
    scanf("%d",&octal);

    decimal(octal);
}