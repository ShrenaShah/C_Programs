#include<stdio.h>
int main()
{
    int number;
    printf("enter number: ");
    scanf("%d",&number);

    if(number<0)
    {
        printf("negative");
    }
    else if(number>0)
    {
        printf("positive");
    }
    else
    {
        printf("zero");
    }
    return 0;
}