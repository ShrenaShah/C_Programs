#include<stdio.h>
int main()
{
    char s[1000];
    int vowel = 0, consonant = 0, digit = 0, whiteSpace = 0;
    printf("enter a string: ");
    gets(s);
    
    for(int i=0; s[i]!='\0'; i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s [i] == 'i' || s[i] == 'o' || s[i] == 'u' ||
            s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            vowel++;
        }
        else if(s[i] >= '0' && s[i] <= '9')
        {
           digit++;
        }
        else if(s[i] == ' ')
        {
            whiteSpace++;
        }
        else
        {
            consonant++;
        }
    }
    printf("vowel = %d\n",vowel);
    printf("digit = %d\n",digit);
    printf("white space = %d\n",whiteSpace);
    printf("consonant= %d\n",consonant);

    return 0;
}