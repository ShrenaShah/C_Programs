#include<stdio.h>
#include<math.h>

int main()
{
    double a, b, c, D, x1, x2;

    printf("enter coefficients: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    D = (b*b)-(4*a*c);

    if(D >= 0)
    {
       x1 = (-b+sqrt(D))/(2*a);
       x2 = (-b-sqrt(D))/(2*a);
       printf("roots of given equation is %.2lf and %.2lf", x1,x2);
    }
    else
    {
        printf("roots are not found");
    }

    return 0;
}