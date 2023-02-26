// #include<stdio.h>
// int main(){
//     int entered_number;
//     printf("Enter Number: ");
//     scanf("%d", &entered_number);
//     for (int i = 2; i < entered_number; i++){
//         if (entered_number % i == 0){
//             printf("%d Number is not Prime", entered_number);
//             return 0;
//         }
//     }
//     printf("%d Number is Prime", entered_number);
// }

#include<stdio.h>
int main(){
    int entered_number, dhvaj = 2;
    printf("Enter Number: ");
    scanf("%d", &entered_number);
    for (int i = 2; i < entered_number; i++){
        if (entered_number % i == 0){
            dhvaj = 3;
        }
    }
    if (dhvaj == 3){
        printf("Not prime");
    }
    else{
        printf("Prime");
    }
}