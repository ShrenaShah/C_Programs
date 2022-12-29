// #include<stdio.h>
// int main()
// {
//     int n;
//     while (1)
//     {
//         printf("Enter Number: ");
//         scanf("%d", &n);

//         if (n % 2 != 0){
//             break;
//         }
//     }
//     printf("The Process is end because you entred odd number %d", n);
// }
    
// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter Number always greater than 5: ");
//     scanf("%d", &n);
//     if (n < 5){
//         return 0;
//     }
//     for (int i = 0; i <= n; i++){
//         printf("%d\n", i);
//         if (i == 4){
//             break;
//         }
//     }
// }
#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        printf("enter number:");
        scanf("%d", &n);

        if(n % 7 == 0)
        {
            break;
        }
    }
    printf("The Process is end because you entered number %d which is multiplied by 7", n);
    return 0;
}