#include<stdio.h>
int main()
{
    // for(int i=1; i<=7;i++ ){
    //     printf("%d\n",i);
    // }
    //  int n;
    //  printf("enter number:");
    // scanf("%d",&n);

    // int i =0;
    // while(i<=n){
    //     printf("%d\n",i);
    //     i++;
    // };
    // for(int i =1;i<=n;i++){
    //     printf("%d\n",i);
    // 
    // int i=5;
    // do{
    //     printf("%d\n",i);
    //     i--;
    // }
    // while(i<1);
    int n, sum = 0;
    printf("enter number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        sum = sum + i;
    }
    printf("Sum is: %d", sum);
    return 0;
}