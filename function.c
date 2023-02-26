#include<stdio.h>
void namaste();
void banjour();

int main()
{
    char ch;
    printf("enter 'i' for india and 'f' for french: ");
    scanf("%c",&ch);
    
    if(ch=='i')
    {
        printf("namaste");
    }
    else if(ch=='f') 
    {
        printf("bonjour");
    }
    else
    {
        printf("you entered wrong character please try again");
    }
   
    return 0;
}

void namaste()
{
    printf("namaste\n");
}

void bonjour()
{
    printf("bonjour\n");
}
