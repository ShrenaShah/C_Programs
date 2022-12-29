#include<stdio.h>
int main()
{
    int number,seen[10] = {0};
    printf("enter number: ");
    scanf("%d",&number);

    while(number>0)
    {
        int rem;
        rem = number%10;

        if(seen[10] == 1)
            break;
        seen[rem] = 1;
        number = number/10;
    }
    if(number>0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
    
}