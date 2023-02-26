// Multidimensional Array
// arr[row][column] = arr[3][2] = {(1, 2),(3,4),(5,6)} / {1, 2, 3}
// arr[1] = (3,4)
// arr[1][0] = 3


#include<stdio.h>
int main()
{
    int rows, columns;
    printf("Enter The no of rows and columns of metrix: ");
    scanf("%d %d", &rows, &columns);

    int arrMatrix[rows][columns];
    printf("enter the elements of first metrix:\n");
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            scanf("\n%d", &arrMatrix[i][j]);
        }
    }

    int arrMatrix2[rows][columns];
    printf("enter the elements of second metrix:\n");
    for(int k=0; k<rows; k++){
        for(int l=0; l<columns; l++){
            scanf("%d", &arrMatrix2[k][l]);
        }
    }

    int sumMatrix[rows][columns];
    for(int m=0; m<rows; m++){
        for(int n=0; n<columns; n++){
            sumMatrix[m][n] = arrMatrix[m][n] + arrMatrix2[m][n];
        }
    }

    printf("Sum of matrix is:\n\n");
    for(int a=0; a<rows; a++){
        for(int b=0; b<columns; b++){
            printf("%d   ", sumMatrix[a][b]);
        }
        printf("\n\n");
    }
}