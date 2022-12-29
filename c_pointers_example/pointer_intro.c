#include<stdio.h>
int main()
{
    // int var = 5;
    // printf("value is: %d\n", var);
    // printf("address is: %p", &var);

    int* pointer_variable, normal_variable, var; // creating pointer variable
    normal_variable = 5;
    var = 8;
    pointer_variable = &var; // assign normal variable address into pointer_variable
    printf("%d\n", *pointer_variable); // by adding * before pointer_variable, we get value of address.
    pointer_variable = &normal_variable;
    printf("%d", *pointer_variable);
}

// Pointers are "Special Variable" that stores "Address"
