#include<stdio.h>

int sum(int limit)
{
    if(limit != 0){
        return limit + sum(limit - 1);
    }
    else{
        return limit;
    }
}

int main()
{
    int limit;
    printf("enter limit of sum: ");
    scanf("%d", &limit);

    printf("%d", sum(limit));
}
