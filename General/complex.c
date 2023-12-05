// C program to demonstrate
// addition of complex numbers
#include <stdio.h>

// Structure Definition 
typedef struct complexNumber {
	int real;
	int img;
} complex;

// Function Declaration
complex add(complex x, complex y);

int main()
{
	// Define three complex type numbers
	complex a, b, sum;

	// First complex number
	a.real = 4;
	a.img = 3;

	// Second complex number
	b.real = 9;
	b.img = 2;


	printf("\n a = %d + %di", a.real, a.img);
	printf("\n b = %d + %di", b.real, b.img);

	// call add(a,b) function and
	// pass complex numbers a & b
    
	sum = add(a, b);
    

	// Print result
	printf("\n sum = %d + %di", sum.real, sum.img);

	return 0;
}

// Complex add(complex x, complex y)
// function definition
complex add(complex x, complex y)
{
	// Define a new complex number.
	complex add;

	add.real = x.real + y.real;
	add.img = x.img + y.img;

	return (add);
}
