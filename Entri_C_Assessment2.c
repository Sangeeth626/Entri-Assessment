/* 1. Write a C program that takes an integer from the user and determines whether the number is even or odd.
      Description: The program should prompt the user to enter a whole number. 
      It must then check if the number is perfectly divisible by 2. 
      If it is, the program should display that the number is even; otherwise, it should display that the number is odd.
      The program should handle both positive and negative integers. 
      Pre-requisites: Conditional Statements, Operators. */

/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a whole number : ");
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("It is an even number.");
    }
    else
    {
        printf("It is an odd number.");
    }
    return 0 ;
}*/
    



/* 2. Write a C program that asks the user to enter a number and determines whether that number is prime or not.
      Description: A prime number is a natural number greater than 1 that cannot be formed by multiplying two smaller natural numbers. 
      In simpler terms, it is a number that is only divisible by 1 and itself. 
      Your program should take an integer as input and check if it has any divisors other than 1 and the number itself. 
      If the user enters a number like 2, 3, or 5, the program should identify it as prime. However, if the user enters a number less than 2, or a number like 4 or 6 that can be divided by other values, the program should state it is not prime. 
      You should use a simple loop to test for these divisors and a conditional statement to print the final result. 
      Pre-requisites: Loops, Conditional Statements, Operators*/

/*#include<stdio.h>
int main()
{
    int n, i, flag=1;
    printf("Enter a number : ");
    scanf("%d", &n);
    if(n<2)
    {
        printf("It is not a prime number.");
        return 0 ;
    }

    for(i=2 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            flag = 0 ;
        }
    }

    if(flag == 1)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }

    return 0 ;
}*/      




/* 3. Write a C program that takes a positive integer from the user and calculates its factorial.
      Description: The program should prompt the user to enter a single whole number. 
      It must then calculate the factorial of that number, which is the product of all positive integers from 1 up to the number entered. 
      The final result should be displayed clearly on the screen. 
      The program should also account for the fact that the factorial of 0 is 
      Pre-requisites: Operators, Data Types, Loops. */

/*#include<stdio.h>
int main()
{
    int n, i, f=1 ;
    printf("Enter a whole number : ");
    scanf("%d", &n);
    for(i=1 ; i<=n ; i++)
    {
        f *= i ;
    }
    printf("%d! = %d\n", n, f);
    return 0 ;
}*/      




/* 4. Write a C program to generate the Fibonacci series up to a given number of terms.
      Description: The program should prompt the user to enter the number of terms (n). 
      It should then generate the Fibonacci sequence, where each number is the sum of the two preceding ones, starting from 0 and 1. 
      The program must display the sequence up to the specified number of terms. 
      Pre-requisites: Loops, Variables, Basic Arithmetic Operations*/

/*#include<stdio.h>
int main()
{
    int n, first, second, fab=0;
    printf("Enter a number : ");
    scanf("%d", &n);
    
    first  = 0 ;
    second = 1 ;

    printf("Fabannoci Series : ");
    printf("%d %d ", first, second) ;
    
    for(int i=0 ; i<100 ; i++)
    {
        fab = first + second ;

        if(fab > n)
        {
            return 0 ;
        }

        printf("%d ", fab) ;
        first  = second ;
        second = fab ;
    }

    return 0 ;
}*/




/* 5. Write a C program that uses a function to check whether a given number is a Perfect Number.
     Description: The program should prompt the user to enter a positive integer. 
     A separate function must be written that computes the sum of all proper divisors of the number (excluding the number itself) and returns whether the sum equals the original number. 
     The main function should display whether the number is perfect or not. (Example: 6 = 1+2+3, 28 = 1+2+4+7+14) 
     Pre-requisites: Functions, Loops, Return Values.*/
      
/*#include<stdio.h>

int perfect_number(int n) ;

int main()
{
    int n , sum;
    printf("Enter a positive number : ");
    scanf("%d", &n);

    sum = perfect_number(n);

    if(sum == n)
    {
        printf("It is a perfect number.") ;
    }
    else
    {
        printf("It is not a perfect number.") ;
    }

    return 0 ;
}     

int perfect_number(int n)
{
    int sum = 0 ;
    for(int i=1 ; i<n ; i++)
    {
        if(n%i == 0)
        {
            sum += i ;
        }
    }
    
    return sum ;
}*/




/* 6. Write a C program that uses a recursive function to find the GCD of two numbers using the Euclidean algorithm.
      Description: The program should prompt the user to enter two positive integers. 
      A recursive function must be written that repeatedly applies the Euclidean method replacing the larger number with the remainder of dividing the two until the remainder is zero. 
      The GCD should be returned to the main function and displayed on the screen. 
      Pre-requisites: Functions, Recursion, Modulus Operator.*/

/*#include<stdio.h>

int GCD (int n1, int n2);
int main()
{
    int n1, n2 ;
    printf("Enter two positive numbers : ");
    scanf("%d%d", &n1, &n2);

    printf("%d", GCD(n1, n2));

    return 0 ;
}      

int GCD (int n1, int n2)
{
    if(n2==0)
    {
        return n1 ;
    }
    else
    {
        return (GCD(n2, n1%n2));
    }
}*/




/* 7. Write a C program that uses a function to count the frequency of each digit (0–9) in a given integer.
      Description: The program should prompt the user to enter an integer. 
      A separate function must be written that takes the number, extracts each digit using a loop, and updates a frequency array accordingly. 
      The function should not return a single value but instead update the array directly. 
      The main function should then print how many times each digit appears in the number. 
      Pre-requisites: Functions, Arrays, Loops, Pass by Reference (Pointers).*/

#include<stdio.h>
#define SIZE 10

int DigitFreq (long int n);
int main()
{
    long int n ;
    printf("Enter a number : ");
    scanf("%ld", &n) ;

    DigitFreq(n);

    return 0 ;
}      

int DigitFreq(long int n)
{
    int arr[SIZE] ;
    int digit, i, count=0;

    i=0 ;
    while(n!=0)
    {
        digit = n%10 ;
        arr[i] = digit ;
        n = n/10 ;
        i++ ;
        count++ ;
    }

    for(int i=count-1 ; i>=0 ; i--)
    {
        printf("%d ", arr[i]) ;
    }
    printf("\n") ;

    int countA=0 ;

    for(i=0 ; i<count ; i++)
    {
        countA = 0 ;
        for(int j=1 ; j<count ; j++)
        {
            if(arr[i] == arr[j])
            {
                countA++ ;
            }
        }
        printf("%d repeat %d times\n", arr[i], countA) ;
    }
}
