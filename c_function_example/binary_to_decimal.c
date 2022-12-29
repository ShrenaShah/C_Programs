#include<stdio.h>

int decimal(int binary)
{
    int rem,weight = 1,decimal = 0;
    while(binary != 0)//1001 , 100 , 10 , 1 , 0
    {
        rem = binary % 10;//1 , 0 , 0 , 10
        decimal = decimal + weight*rem;
        //1 = 0 + 1*1
        //1 = 1 + 2*0
        //1 = 1 + 4*0
        //9 = 1 + 8*1
        binary = binary/10;//100 , 10 , 1 , 0
        weight = weight*2;//2 , 4 , 8 , 16
    }
    printf("Decimal is %d",decimal);//9
    return 0;
}

int main()
{
    int binary;
    printf("enter any binary number: ");//1001
    scanf("%d",&binary);
    
    decimal(binary);
}