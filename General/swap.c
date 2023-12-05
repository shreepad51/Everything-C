// Swap numbers using extra Variable

#include <stdio.h>
 
int main()
{
    int x, y;
    printf("Enter Value of x ");
    scanf("%d", &x);
    printf("\nEnter Value of y ");
    scanf("%d", &y);
 
    
    int temp = x;
    x = y;
    y = temp;
    
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}

// Without using Extra Variable
/*
int main()
{
    int a, b;
    printf("Enter the two numbers : \n");
    scanf("%d %d", &a, &b);
    printf("Before swapping A is : %d and B is %d \n", a,
           b);
 
    // Swapping without using a third variable
    // Sum of both numbers is stored in 'a'
    a = a + b;
    // Difference of sum and original 'b' is
    // stored in 'b'
    b = a - b;
    // Difference of sum and new 'b' is stored in
    // 'a'
    a = a - b;
 
    printf("After swapping A is : %d and B is : %d \n", a,
           b);
    return 0;
}

*/