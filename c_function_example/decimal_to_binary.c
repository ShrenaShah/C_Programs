// #include<stdio.h>

// int binary(long long number) //123
// {
//     long long result = 0;
//     while (result == 0 || result == 1 && number != 1)
//     {
//       result = number % 2; //1, 1, 0, 1, 1, 1
//       number = number / 2; //61, 30, 15, 7, 3, 1
//       printf("%lld\n",result); //1, 1, 0, 1, 1, 1
//     }
// }

// int main()
// {
//     long long number;
//     printf("enter a decimal number: ");
//     scanf("%lld", &number);

//     binary(number); //123
// }

// C/C++ program for decimal to binary
// conversion using recursion
#include <stdio.h>

// Decimal to binary conversion
// using recursion
int find(int decimal_number) //10, 5, 2, 1, 0
{
	if (decimal_number == 0) 
		return 0;
	else
		return (decimal_number % 2 + 10 * find(decimal_number / 2));
		//(0 + (10(1 + 10(0 + 10(1 + 10(0))))))
		//(0 + (10(1 + 10(0 + 10))))
		//(0 + (10(1 + 100)))
		//(0 + 1010)
		//1010
}

// Driver code
int main()
{
	int decimal_number = 35;
	printf("%d", find(decimal_number)); 
	
	return 0;
}
