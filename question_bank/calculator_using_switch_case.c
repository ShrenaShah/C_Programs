#include<stdio.h>
int main()
{
    int a,b,number;
    printf("enter any two numbers: ");
    scanf("%d %d",&a,&b);
    printf("enter 1 for sumetion\n2 for substraction\n3 for division\n4 for multiplication\n");
    scanf("%d",&number);

    switch(number)
    {
        case 1:printf("sum of given numbers is %d",a+b);
            break;
        case 2:printf("substraction of given numbers is %d",a-b);
            break;
        case 3:printf("division of given numbers is %d",a/b);
            break;
        case 4:printf("multiplication of given numbers is %d",a*b);
            break;
        default:printf("plese enter valid number");
    }
    
    return 0;
}