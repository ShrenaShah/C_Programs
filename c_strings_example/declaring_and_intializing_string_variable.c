#include<stdio.h>
int main()
{
        /*  char *ptr = "Hello";        it is not valid,because *ptr is a string and we can not 
            *ptr = 'M';                 modify a string literal

            char s[6] = "Hello";        it is valid because s[6] is an array and we can modify an
            s[0] = 'M';                 array
        */
    
    char s[] = "Hello";
    char t[6];

    int i;
    for(i = 0; s[i] != '\0'; i++)
    {
        t[i] = s[i];
    }
    t[i] = '\0';
    printf("%s",t);
    return 0;
}