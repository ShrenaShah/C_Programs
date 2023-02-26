// armstrong number pow(1,3)+pow(5,3)+pow(3,3)=153

#include<stdio.h>
int main()
{
    float number;
    printf("enter a number:");
    scanf("%f",&number);
    printf("your number is:%f\n",number);
    int a=(int)number;
    if(a=number){
        printf("natural number");
    }
    else{
        printf("not a natural number");
    }
    
    // 1st
    // int number;
    // printf("enter number: ");
    // scanf("%d",&number);
    
    // if(pow(number,3)){
    //     printf("armstrong number");
    // } 
    // else{
    //     printf("not a armstrong number");
    // }
    return 0;
}