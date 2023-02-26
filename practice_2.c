#include<stdio.h>
int main()
{  
    char ch;
    printf("enter character: ");
    scanf("%c",&ch);
    if(ch>= 'A' && ch<= 'Z' ){
        printf("upper case\n");
    }
    else if(ch>= 'a' && ch<= 'z'){
        printf("lower case\n");
    }
    else {
        printf("not a alphabet");
    }

    // int x=2;
    // if(x=0){
    //     printf("x is equal to 1\n");
    // }
    // else{
    //     printf("x is not equal to 1");
    // }
    // marks>=33 && marks<=100 ? printf("pass"):printf("fail");
    // return 0;
//     if(marks<30){
//         printf("grade C\n");
//     }
//     else if (marks>=30 && marks<70){
//         printf("grade B\n");
//     }
//     else if (marks>= 70 && marks <90){
//         printf("grade A\n");
//     }
//     else if(marks>=90 && marks <= 100){
//         printf("grade A+\n");
//     }
//     else{printf("wrong marks");}

    return 0; 
}  
