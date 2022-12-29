#include<stdio.h>
int main()
{
    // char a[10];
    // printf("enter string: ");
    // scanf("%s",a);  // scanf always get string until the space
    // printf("%s\n",a);

    char s[10];
    printf("enter string: ");
    gets(s); // gets give full string
    printf("%s",s); 
    return 0;
}