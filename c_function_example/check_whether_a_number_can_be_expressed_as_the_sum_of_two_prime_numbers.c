#include<stdio.h>

int prime(int number)
{
    int flag = 0;
    for(int n = 2; n < number; n++){
        if(number % n == 0){
            flag = 1;
            break;
        }
    }
    if (flag == 1){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int number;
    printf("enter positive number: ");
    scanf("%d", &number);

    for(int i = 1; i < number; i++){
        if(prime(i)){
            for(int j = i; j < number; j++){
                if(prime(j)){
                    if (i + j == number){
                        printf("%d + %d\n", i, j);
                    }
                }
            }
        }
    }
}