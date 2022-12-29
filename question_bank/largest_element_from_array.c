#include<stdio.h>
int main()
{
    int arr[10],max;
    printf("enter any ten numbers: ");
    max = arr[0];
    for(int i=0; i<=9; i++)
    {    
        scanf("%d",arr[i]);
        if(max > arr[i])
        {
            max = arr[i];
        }
    }
    printf("%d is maximum number",max);
    return 0;
}