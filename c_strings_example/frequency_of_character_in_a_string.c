#include<stdio.h>
int main()
{
   char s[1000],ch; 
   int count = 0;

   printf("Enter the string: ");
   gets(s);

   printf("enter the character: ");
   scanf("%c",&ch);

   for(int i=0; s[i]!='\0'; i++)
   {
      if(ch == s[i]){
         count++;   
      }
   }
   printf("frequency of %c = %d",ch,count);
   return 0;
}
