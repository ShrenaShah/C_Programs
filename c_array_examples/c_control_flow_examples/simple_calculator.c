#include<stdio.h>
int main()
{
    float entered_number_1, entered_number_2; 
    char operator;
    printf("enter operator to perform calculator operation: ");
    scanf("%c", &operator);
    printf("Enter 2 Numbers: ");
    scanf("%f %f", &entered_number_1, &entered_number_2);

    switch (operator){
        case '+': 
            printf("%.1f + %.1f = %.1f", entered_number_1, entered_number_2, entered_number_1 + entered_number_2);
            break;
        case '-': 
            printf("%.1f - %.1f = %.1f", entered_number_1, entered_number_2, entered_number_1 - entered_number_2);
            break;
        case '*': 
            printf("%.1f * %.1f = %.1f", entered_number_1, entered_number_2, entered_number_1 * entered_number_2);
            break;
        case '/': 
            printf("%.1f / %.1f = %.1f", entered_number_1, entered_number_2, entered_number_1 / entered_number_2);
            break;
        default: printf("this sign is not available");
    } 
    return 0;
}