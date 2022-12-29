#include<stdio.h>
int main()
{
    int array[] = {1,2,3,4343,56,7,789,9,9089,654,43,43,344,564,545};
    printf("%d",sizeof(array)/sizeof(array[0]));
}