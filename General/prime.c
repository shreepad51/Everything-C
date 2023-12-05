#include<stdio.h>

int main (){
    printf("Enter the number you want to check for prime\n");
    
    int Num;
    scanf("%d", &Num);
    int flag = 1;

    for(int i=2; i< Num / 2 ; i++){
        if(Num % i == 0)
        {
            flag = 0;
            break;
        }
    }

        if(flag)
        {
        printf("Provided number is a Prime Number ! \n");
        }
    else {
    printf("Provided number is not a Prime Number ! \n");
    }
return 0;
}


// Implementation using Function Call

/*
void checkPrime(int N) 
{ 
    // initially, flag is set to true or 1 
    int flag = 1; 
  
    // loop to iterate through 2 to N/2 
    for (int i = 2; i <= N / 2; i++) { 
        if (N % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
  
    if (flag) { 
        printf("The number %d is a Prime Number\n", N); 
    } 
    else { 
        printf("The number %d is not a Prime Number\n", N); 
    } 
  
    return; 
} 
  
// driver code 
int main() 
{ 
    int N = 11; 
    checkPrime(N); 
    return 0;

}

*/

/*
// C program to print Prime numbers till N
 
#include <stdbool.h>
#include <stdio.h>
 
// This function is to check
// if a given number is prime
bool isPrime(int n)
{
    // since 0 and 1 is not prime
    // number return false.
    if (n == 1 || n == 0)
        return false;
 
    // Run a loop from 2 to n/2
    for (int i = 2; i <= n / 2; i++) {
 
        // if the number is divisible by i, then n is not a
        // prime number, otherwise n is prime number.
        if (n % i == 0)
            return false;
    }
    return true;
}
 

int main()
{
    int N = 50;
 
    // check for the every number from 1 to N
    for (int i = 1; i <= N; i++) {
 
        // check if i (current number) is prime
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

*/
