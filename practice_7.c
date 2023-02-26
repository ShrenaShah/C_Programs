// #include<stdio.h>
// int sum(int a, int b);
// int main()
// {
//     int a, b;
//     printf("enter two numbers: ");
//     scanf("%d",&a);
//     scanf("%d",&b);

//     int s = sum(a, b);
//     printf("sum is %d", s);
//     return 0;
// }

// int sum(int a, int b)
// {
//     return a + b;
#include<stdio.h>

void makeNumberTable(int enteredNumber){
    for (int i = 1; i <= 10; i++){
        printf("%d X %d = %d\n", enteredNumber, i, enteredNumber * i);
    }
}

int main()
{ 
    int n;
    printf("enter number: ");
    scanf("%d", &n);
    makeNumberTable(n);
    return 0;
}