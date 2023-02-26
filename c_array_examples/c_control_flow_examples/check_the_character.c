#include<stdio.h>
int main()
{
    char character;
    printf("enter the character: ");
    scanf("%c",&character);

    if((character>='a' && character<= 'z') || (character>='A' && character <= 'Z'))
    {
        printf("entered character is alphabet");
    }
    else
    {
        printf("entered character is not a alphabet");
    }
    printf("\nThank You");
    return 0;
}