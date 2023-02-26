#include<stdio.h>
int main()
{
    // int multi[2][4] = {{3,6,9,12},{2,4,6,8}};
    // printf("%d",multi[1][2]);
    // return 0;

    int multi[2][3] = {{1,2,3},{4,5,6}};

    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<3 ; j++)
        {
            printf("%d\t",multi[i][j]);
        }
    }

    return 0;
}