// #include<stdio.h>
// int main()
// {
//     // {12,6,55,21,2,54,74,48}
//     int array_size;
//     printf("Enter Size of an Array: ");
//     scanf("%d", &array_size);

//     int arr[array_size]; // arr[5] = {}
//     printf("enter each element of array");
//     for (int i = 0; i < array_size; i++){
//         scanf("%d", &arr[i]); // arr[0], arr[1], arr[2], arr[3], arr[4]
//     }

//     int temp; // {6, 4, 8, 2, 7}
//     temp = arr[0]; // 6 8  
//     for (int i = 1; i < array_size; i++) // 1 2 3 4
//     {
//         if (arr[i] > temp){  // 4>6 8>6 2>8 7>8
//             temp = arr[i]; // 8
//         }
//     }
    
//     printf("Max Element is: %d", temp); // 8
// }

#include<stdio.h>
int main()
{
    int *p, a = 10;
    p = &a;
    printf("%d", *p);
}
