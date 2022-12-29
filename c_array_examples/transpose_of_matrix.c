#include<stdio.h>
int main()
{
    int rows,columns;
    printf("enter number of rows and columns: ");
    scanf("%d %d", &rows, &columns);

    printf("enter elements of matrix: ");
    int matrix[rows][columns];
    for(int i=0; i<rows; i++)
    {
        for(int j=0; j<columns; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }

    printf("Transpose:\n");
    for(int i=0; i<columns; i++)
    {
        for(int j=0; j<rows; j++)
        {
            printf("%d   ",matrix[j][i]);
        }
        printf("\n\n");
    }
    return 0;
}