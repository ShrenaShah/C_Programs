#include<stdio.h>
#include<math.h>
int main(){
    int entered_number, digit, original_number, result = 0;
    printf("Enter Number: ");
    scanf("%d", &entered_number);
    original_number = entered_number;
    while(entered_number != 0){
        digit = entered_number % 10;
        result += (digit*digit*digit);
        entered_number = entered_number / 10;
    }
    if (result == original_number){
        printf("%d is an Armstrong Number", original_number);
    }
    else{
        printf("%d is Not an Armstrong Number", original_number);
    }
    return 0;
}
