#include<stdio.h>
#include<math.h>
int main()
{
    int arrSize;
    printf("Enter size of an array: ");
    scanf("%d", &arrSize);

    int arrElement[arrSize];
    for (int i=0; i<arrSize; i++){
        scanf("%d", &arrElement[i]);
    }

    int sum = 0, mean;
    for (int j=0; j<arrSize; j++){
        sum = sum + arrElement[j];
    }
    mean = sum/arrSize;

    int meanArr[arrSize];
    for (int k=0; k<arrSize; k++){
        meanArr[k] = (arrElement[k] - mean)*(arrElement[k] - mean);
    }

    int sum1 = 0, mean1;
    for(int l=0; l<arrSize; l++){
        sum1 = sum1 + meanArr[l];
    }
    mean1 = sum1/arrSize;

    float sqr;
    sqr = sqrt(mean1);

    printf("%f", sqr);

    return 0;
}