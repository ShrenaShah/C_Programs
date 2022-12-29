#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter any three numbers: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("%d is smallest number",a);
        }
        else
        {
            printf("%d is smallest number",c);
        }
    }
    else
    {
        printf("%d is smallest number",b);
    }
    return 0;
}