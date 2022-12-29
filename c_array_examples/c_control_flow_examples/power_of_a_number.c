#include<stdio.h>
int main(){
    double base, exp, power = 1.00;
    printf("Enter The Base: ");
    scanf("%lf", &base);
    printf("Enter The Power of Base: ");
    scanf("%lf", &exp);
    while(exp > 0){
        power *= base;
        exp--;
    }
    printf("power = %.2lf", power);
    return 0;
}

