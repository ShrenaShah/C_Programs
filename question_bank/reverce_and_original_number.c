#include<stdio.h>
int main()
{
    int n,reverce = 0,reminder,original;
    printf("enter any number: ");
    scanf("%d",&n);
    original = n;

    while (n != 0) {
        reminder = n % 10;
        reverce = reverce * 10 + reminder;
        n /= 10;
    }

    // for(int i = 0; i<=n; i++)
    // {
    //     reminder = n%10;
    //     reverce = reverce*10 + reminder;
    //     n = n/10;
    // }
    if(original == reverce)
    {
        printf("palindrom number");
    }
    else
    {
        printf("not a palindrom number");
    }
    return 0;
}