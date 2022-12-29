#include<stdio.h>
int main()
{
    int rows1, columns1;
    printf("enter numbers of rows and columns: ");
    scanf("%d %d", &rows1, &columns1);

    int matrix1[rows1][columns1];
    printf("enter elements of first matrix: ");
    for(int i=0; i<rows1; i++)
    {
        for(int j=0; j<columns1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("enter numbers of rows and columns: ");
    int rows2, columns2;
    scanf("%d %d", &rows2, &columns2);

    int matrix2[rows2][columns2];
    printf("enter elements of first matrix: ");
    for(int k=0; k<rows2; k++)
    {
        for(int l=0; l<columns2; l++)
        {
            scanf("%d", &matrix2[k][l]);
        }
    }

    int matrix[rows1][columns2];
    for (int i = 0; i < rows1; i++) {
            for (int j = 0; j < columns2; j++) {
                matrix[i][j] = 0;
                for (int k = 0; k < columns2; k++) {
                    matrix[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

    for(int i=0; i<rows1; i++){
        for(int j=0; j<columns2; j++){
            printf("matrix[%d][%d] = %d\n", i, j, matrix[i][j]);
        }
    }
}