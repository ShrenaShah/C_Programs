#include<stdio.h>
int main()
{
    int a;
    printf("enter any number: ");
    scanf("%d",&a);

    for(int i=2; i<a; i++)
    {
        if(a%i == 0)
        {
            printf("prime number");
        }
        else
        {
            printf("not a prime number");
        }
        return 0;
    }
    
}