#include<stdio.h>
int main()
{
    int interval1, interval2, prime, flag = 0;
    printf("enter two interval (Minimum interval is 3): ");
    scanf("%d %d", &interval1, &interval2);
    if (interval1 < 3 || interval2 < 3){
        printf("You Entered Value less than 3");
        return 0;
    }
    else if (interval1 > interval2)
    {
        printf("1st interval is always less than 2nd interval");
        return 0;
    }
    
    for(int interval = interval1; interval <= interval2; interval++)
    {
        for(int n = 2; n < interval; n++)
        {
            if(interval % n == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0){
            printf("%d\n", interval);
        }
        flag = 0;
    }
}