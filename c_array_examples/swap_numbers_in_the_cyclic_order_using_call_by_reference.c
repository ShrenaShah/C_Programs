// #include<stdio.h>

// int swap(int *a,int *b,int *c)
// {
//     int n;
//     n=*b;
//     *b=*a;
//     *a=*c;
//     *c=n;
// }

// int main()
// {
//     int a,b,c;
//     printf("enter three numbers respectively: ");
//     scanf("%d %d %d",&a,&b,&c);
    
//     swap(&a,&b,&c);
//     printf("values after swaping: %d\n %d\n %d\n ",a,b,c);
//     return 0;
// }
#include<stdio.h>
int main()
{
    int a= 10,b = 12;
    
    if(a<=b)
    {
        printf("a is less than b");
    }
    else
    {
        printf("b is less than a");
    }

    printf("\n %d", (a<b) && (a!=b));

    return 0;
    
}




