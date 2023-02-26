#include<stdio.h>
int main()
{
    int marks[5], mark, sum = 0;
    for (int i=0; i<5; i++)
    {
        printf("Enter Mark:");
        scanf("%d", &mark);
        marks[i] = mark;
        sum = sum + marks[i];
    }
        printf("average is: %d", sum/5); 
}
