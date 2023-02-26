#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[200];
    strcpy(str1, "Hello ");
    strcpy(str2,"world!");
    strcat(str1,str2);      //for merge to strings
    printf("%s",str1);
    return 0;
}