#include<stdio.h>

int prime(int i1, int i2)
{
    int flag = 0;
    for(int i = i1; i <= i2; i++)
    {
        for(int j = 2; j < i; j++)
        {
            if(i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if(flag != 1){
            printf("%d\n", i);
        }
        flag = 0;
    }
}

int main()
{
    int i1, i2;

    printf("enter intervals: ");
    scanf("%d %d", &i1, &i2);

    prime(i1, i2); 
}
