#include<stdio.h>
int main()
{
    int num1, num2, hcf,multiply;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);
    
    multiply = num1*num2;
    for(int i = 1;i<=num1 || i<=num2;i++)
    {
        if(num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
        printf("HCF = %d",multiply/hcf);
        return 0;
    }
}