#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("enter the string: ");
    scanf("%s", &str);

    printf("length of the %d",strlen(str));
    return 0;
}