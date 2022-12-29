#include<stdio.h>
int input(char str[],int n)
{
    int ch, i = 0;
    while((ch = getchar()) != '\n')
        if(i<n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}
int main()
{
    char str[100];
    printf("enter string: ");
    int n = input(str,5);
    printf("%s",str);
    return 0;
}
