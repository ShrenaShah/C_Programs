#include<stdio.h>
#include<string.h>
int main()
{
    char str1[6] = "Hello";
    char str2[6];
    printf("%s\n",strcpy(str2,str1));//for coping string

    strncpy(str2,str1,sizeof(str2));//when str2's length is smaller then str1 length 
    printf("%s",str2);
    return 0;
}
