#include<stdio.h>
int main()
{
    int year;
    printf("enter your years in company: ");
    scanf("%d",&year);
    
    if(year>=0 && year<=4){
        printf("you were/are a junior software engineer\n");
    }
    
    if(year>=5 && year<=6){
        printf("you were/are a senior software engineer\n");
    }

    if(year>=7 && year <=10){
       printf("you were/are a principal software engineer\n"); 
    }
    
    else{
        printf("you were/are trainee\n");
    }
    printf("Thank You");
    return 0;
}
