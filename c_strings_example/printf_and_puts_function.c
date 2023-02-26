#include<stdio.h>
int main()
{
    char *ptr = "Hello World";
    printf("%.5s\n",ptr);
    printf("%.7s\n",ptr);
    printf("%5.5s\n",ptr);
    printf("%6.5s\n",ptr);
    puts(ptr);
    return 0;
}