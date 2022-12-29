#include<stdio.h>

int main()
{
    int num1, num2, hcf;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num1 || i <= num2; i++)
    {
        printf("%d\n", i);
        if (num1 % i == 0 && num2 % i == 0)
        {
            hcf = i;
        }
    }
    printf("HCF is %d", hcf);

    return 0;
}