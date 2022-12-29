#include<stdio.h>
int main()
{
    int arr[5] = {12,32,44,56,67},sum = 0;
    for(int i = 0; i<5; i++)
    {
        sum = sum + arr[i];
    }
    printf("average of array is %d",sum/5);
    return 0;

}