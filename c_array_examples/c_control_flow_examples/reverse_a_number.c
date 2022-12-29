#include<stdio.h>
int main()
{
   int n,reverse = 0,reminder ;
   printf("enter number: ");
   scanf("%d",&n);

   while (n != 0)
   {
        reminder = n%10;
        reverse = reverse*10 + reminder;
        n/=10; //for every time you need to store value of n/10 and after this loop will be circulates
                //n=n/10;
   }
   printf("reverse number is %d",reverse);
   return 0;

}