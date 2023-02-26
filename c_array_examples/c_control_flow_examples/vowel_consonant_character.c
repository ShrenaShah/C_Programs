#include<stdio.h>
char main()
{
    char character;
    printf("enter character: ");
    scanf("%c", &character);

    if(character=='a' || character=='e' || character=='i' || character=='o' || character=='u' ||
       character=='A' || character=='E' || character=='I' || character=='O' || character=='U' )
    {
        printf("vowel");
    }

    else
    {
        printf("consonant");
    }

    printf("\nThank You");

    return 0;
}