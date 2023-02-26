#include<stdio.h>

void reverse_sentence()
{
    char sentence;
    scanf("%c", &sentence);
    if (sentence != '\n'){
        reverse_sentence();
        printf("%c\n", sentence);
    }
}

int main()
{
    printf("enter sentence: ");
    reverse_sentence();
    return 0;
}
