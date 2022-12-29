#include<stdio.h>
int main()
{
    int number,r,a,b,c;
    float d = 3.14;
    printf("enter 1 for circle\n2 for rectangle\n3 for square: \n");
    scanf("%d",&number);

    switch(number)
    {   
        case 1: printf("enter radius: ");
                scanf("%d",&r);
                printf("area of circle: %f",d*r*r);
                break;
        case 2: printf("enter sides of rectangle: ");
                scanf("%d %d",&a,&b);
                printf("area of rectangle: %d",a*b);
                break;
        case 3: printf("enter sides of square: ");
                scanf("%d",&c);
                printf("area of square: %d");
                break;
        default:
                printf("enter valid number");
    }

    return 0;
}