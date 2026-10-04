/* 1. Write a function in C that takes array of integers and its size, and return the second largest element 
      Constraints : * Do not sort the array
                    * Assume the array has at least two distinct element  */
               
/*#include<stdio.h>
int SecLargest(int arr[], int size) ;
int main()
{
    int arr[] = {4, 8, 7, 6, 3} ;
    int result, size;

    size = sizeof(arr) / sizeof(arr[0]) ;

    result = SecLargest(arr, size) ;

    printf("Second largest element = %d\n", result) ;

    return 0 ;
}

int SecLargest(int arr[], int size)
{
    int second_largest, largest ;

   if(arr[0] > arr[1])
    {
        largest = arr[0] ;
        second_largest = arr[1];
    }
    else if(arr[0] < arr[1])
    {
        largest = arr[1] ;
        second_largest = arr[0];
    }

    for(int i=2 ; i<size ; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest ;
            largest = arr[i] ;
        }
        else if(arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i] ;
        }
    }

    return second_largest ;
}*/             
                    

// 1.1 Considering every possible edge cases
/*#include<stdio.h>
#include<limits.h>

int SecLargest(int arr[], int size) ;

int main()
{
    int arr[] = {8, 8, 7, 6, 3} ;
    int result, size;

    size = sizeof(arr) / sizeof(arr[0]) ;
    if(size<2)
    {
        printf("Array should have minimum 2 elements!\n") ;
        return 0 ;
    }

    result = SecLargest(arr, size) ;

    printf("Second largest element = %d\n", result) ;

    return 0 ;
}

int SecLargest(int arr[], int size)
{
    int second_largest, largest ;

    largest = arr[0];
    second_largest = INT_MIN ;

    for(int i=1 ; i<size ; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest ;
            largest = arr[i] ;
        }
        else if(arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i] ;
        }
    }

    return second_largest ;
}*/




/* 2. You are given an 8-bit register represented as an unsigned char , Write a function to
      * SET the 3rd bit (bit index 2)
      * CLEAR the 6th bit (bit index 5)
      * TOGGGLE the first bit (bit index 0)
      Return the modified register value. NOTE : Use bitwise operation only. Avoid loops and conditionals */ 

/*#include<stdio.h>

void print_binary(int reg) ;
int SET_bit(int reg);
int CLEAR_bit(int reg);
int TOGGLE_bit(int reg);

int main()
{
    unsigned char reg=0 ;
    printf("Initial register value:\n");
    print_binary(reg);

    reg = SET_bit(reg);
    print_binary(reg);
    printf("Decimal : %d\n", reg);
    printf("Hexadecimal : %x\n", reg) ;

    reg = CLEAR_bit(reg) ;
    print_binary(reg);
    printf("Decimal : %d\n", reg);
    printf("Hexadecimal : %x\n", reg) ;

    reg = TOGGLE_bit(reg) ;
    print_binary(reg);
    printf("Decimal : %d\n", reg);
    printf("Hexadecimal : %x\n", reg) ;

    return 0 ;
}      

void print_binary(int reg)
{
    printf("Binary : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (reg>>i)&1);
    }
    printf("\n") ;
}

int SET_bit(int reg)
{
    printf("\nAfter Setting 3rd bit:\n");
    reg |= (1U<<2);
    return reg ;
}

int CLEAR_bit(int reg)
{
    printf("\nAfter Clearing 6th bit:\n");
    reg &= ~(1U<<5) ;
    return reg ;
}

int TOGGLE_bit(int reg)
{
    printf("\nAfter Toggling first bit:\n");
    reg ^= (1U<<0);
    return reg ;
}*/




/* 3. Write a C program to print a pyramid of stars for a given number n. If n = 5, the output should be:
                  *
                 ***
                *****
               *******
              *********          */

/*#include<stdio.h>
int main()
{
    int n ;
    printf("Enter a number of lines : ");
    scanf("%d", &n);

    for(int i=1 ; i<=n ; i++)
    {
        for(int k=1 ; k<=n-i ; k++)
        {
            printf(" ") ;
        }

        for(int j=1 ; j<=(2*i-1) ; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0 ;
}*/
