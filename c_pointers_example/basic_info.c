#include<stdio.h>
int main()
{
    int age = 17;
    // printf("%p",&age);
    // scanf("%d",&age);
    int* ptr = &age;
    printf("%p\n",ptr);
    printf("%d",*ptr);
    return 0;
}