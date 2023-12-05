// C program to implement the above approach
#include <stdio.h>

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	int result = 1, i;

	// loop from 2 to n to get the factorial
	for (i = 2; i <= n; i++) {
		result *= i;
	}

	return result;
}

// Driver code
int main()
{
	int num = 5;
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}


/*
// Recursion
// C program to find factorial of given number
#include <stdio.h>

// Function to find factorial of given number
unsigned int factorial(unsigned int n)
{
	if (n == 1) {
	return 1;
	}

	return n * factorial(n - 1);
}

// Driver code
int main()
{
	int num = 5;
	printf("Factorial of %d is %d", num, factorial(num));
	return 0;
}

*/