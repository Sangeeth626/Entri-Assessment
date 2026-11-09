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

/*#include<stdio.h>
#define SIZE 10

void DigitFreq (long long int n, int arr[]);

int main()
{
    int arr[SIZE]={0};
    long long int n ;

    printf("Enter a number : ");
    scanf("%lld", &n) ;

    DigitFreq(n, arr) ;

    for(int i=0 ; i<SIZE; i++)
    {
        printf("Digit %d: %d times\n", i, arr[i]);
    }

    return 0 ;
}      

void DigitFreq (long long int n, int arr[])
{
    int digit, size=0;

    while(n != 0)
    {
        digit = n%10 ;
        arr[digit]++;
        n = n/10 ;
    }
}*/





/* 8. Write a C program that uses functions to convert a decimal number to any base between 2 and 16.
      Description: The program should prompt the user to enter a decimal number and a target base. 
      A separate function must be written that performs the repeated division method, stores each remainder, and builds the result in the correct order. 
      For bases above 9, remainders 10–15 should be represented as letters A–F. 
      The converted value should be displayed from the main function. 
      Pre-requisites: Functions, Loops, Arrays, Character Handling.*/

/*#include<stdio.h>
#define SIZE 10

void print_to_base(int n, int base);

int main()
{
    int n, base; 

    printf("Enter the decimal number : ");
    scanf("%d", &n);

    while(1)
    {
        printf("Enter the base : ");
        scanf("%d", &base) ;
        if(base<2 || base>16)
        {
            printf("Invalid base!\nbase value should be from 2 to 16\n\n");
        }
        else
        {
            break ;
        }
    }

    print_to_base(n,base) ;

    return 0 ;
}      

void print_to_base(int n, int base)
{
    int arr[SIZE], i, temp, k;
    char rem ;

    i=0 ;
    while(n!=0)
    {
        rem = n%base ;

        if(base>9)
        {
            if(rem==10)
            {
                rem = 'A' ;
            }
            else if(rem==11)
            {
                rem = 'B' ;
            }
            else if(rem==12)
            {
                rem = 'C' ;
            }
            else if(rem==13)
            {
                rem = 'D' ;
            }
            else if(rem==14)
            {
                rem = 'E' ;
            }
            else if(rem==15)
            {
                rem = 'F' ;
            }
        }

        arr[i] = rem ;
        n = n/base;
        i++ ;
    }

    // For reversing
    k=1 ;
    for(int j=0 ; j<i/2 ; j++)
    {        
        temp = arr[j] ;
        arr[j] = arr[i-k];
        arr[i-k] = temp ;

        k++ ;
    }

    for(int j=0 ; j<i ; j++)
    {
        printf("%c", arr[j]);
    }

}*/





/* 9. Write a C program that uses functions to evaluate a simple arithmetic expression given two numbers and an operator.
      Description: The program should prompt the user to enter two floating-point numbers and an arithmetic operator (+, -, *, /). 
      A separate function must be written for each operation (add, subtract, multiply, divide). 
      A selector function should take the operator as a parameter and call the appropriate function, returning the result to main. 
      Division by zero must be handled gracefully inside the divide function. 
      Pre-requisites: Functions, Switch/Conditionals, Float Arithmetic, Error Handling.*/

/*#include<stdio.h>
#include<stdlib.h>

float calculate(char op, float n1, float n2) ;   

float add (float n1, float n2) ;
float sub (float n1, float n2) ;
float mul (float n1, float n2) ;
float divide (float n1, float n2) ;

int main()
{
    float n1, n2, r;
    char op ;

    printf("Enter two floating-point numbers : ");
    scanf("%f %f", &n1, &n2);

    printf("Enter the Operation to be performed : ");
    scanf(" %c", &op);

    r = calculate(op,n1,n2);

    printf("%.2f %c %.2f = %.2f\n", n1, op, n2, r);

    return 0 ; 
}

float calculate(char op, float n1, float n2)
{
    float r ; 

    switch(op)
    {
        case '+' : r = add(n1,n2); break ;
        case '-' : r = sub(n1,n2); break ;
        case '*' : r = mul(n1,n2); break ;
        case '/' : r = divide(n1,n2); break ;               
        default  : printf("Invalid Operator\n") ;  exit(1) ;
    }

    return r ;
}

float add(float n1, float n2)
{
    return n1+n2 ;
}

float sub(float n1, float n2)
{
    return n1-n2 ;
}

float mul(float n1, float n2)
{
    return n1*n2 ;
}

float divide(float n1, float n2)
{
    if(n2==0)
    {
        printf("Division by zero is not possible\n");
        exit(1);
    }
    else
    {
        return n1/n2 ;
    }
}*/





/* 10 . Write a C program that takes a string of digits from the user and converts it into its equivalent integer value.
        Description:The program should prompt the user to enter a number as a string (for example, 1234). 
        It must then process this string character by character and transform it into an actual integer variable that can be used for mathematical operations. 
        The program should be able to handle positive numbers and display the final integer result on the screen. 
        Pre-requisites: Loops, Strings, Operators.*/

/*#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i, num=0;

    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str,"\n")] = '\0' ;

    i= 0 ;
    while(str[i] != '\0')
    {        
        num = (num*10) + (str[i] - '0');    // if str[i] = 2 , then from ascii table 2 = 50 , and 0 = 48 , therefore 50-48 = 2 , we got integer 2
        i++ ;
    }

    printf("%d", num);

    return 0 ;
}*/        





/*11. Write a C program that takes an integer from the user and converts it into a string of characters.
      Description:The program should prompt the user to enter a whole number. 
      It must then process this integer and store each of its digits as characters within a character array (string). 
      The resulting string should represent the number exactly as it was entered, including a negative sign if the number is less than zero. 
      Finally, the program should display the resulting string on the screen. Pre-requisites: Strings, Loops, Operators.*/

/*#include<stdio.h>
#define SIZE 20 

int main()
{
    long long int n ;
    int digit, i, temp, flag=1;
    char str[SIZE] ;

    printf("Enter a number : ");
    scanf("%lld",&n);

    if (n == 0) 
    {
        str[0] = '0';
        str[1] = '\0';
        printf("%s", str);
        return 0;
    }

    if(n<0)
    {
        flag = 0;
        n = -n ;
    }

    i=0 ;
    while(n!=0)
    {
        digit = n%10 ;
        str[i] = digit + '0';
        n = n/10 ;
        i++ ;
    }
    str[i] = '\0' ;

    if(flag == 0)
    {
        str[i] = '-'; 
        i++;          
    }
    str[i] = '\0' ;

    
    for(int j=0 ; j<i/2 ; j++)
    {
        temp = str[j] ;
        str[j] = str[i-1-j] ;
        str[i-1-j] = temp ;
    }

    printf("%s", str) ;

    return 0 ;
}*/      





/* 12. Write a C program that takes a string from the user and checks whether it is a palindrome.
       Description: The program should prompt the user to enter a string. 
       It must determine if the string reads the same forward and backward. 
       The program should then display a message to the user stating whether the input is a palindrome or not. 
       Pre-requisites: Loops, Control Statements, Strings and Operators.*/

/*#include<stdio.h>
#include<string.h>
#define SIZE 50

int main()
{
    char str_org[SIZE], str_cpy[SIZE];
    int i ,temp, j, length;

    printf("Enter a string : ");
    fgets(str_org, sizeof(str_org), stdin) ;
    str_org[strcspn(str_org, "\n")] = '\0' ;

// FOR GETTING LENGTH OF STRING 
    i=0 ;
    while(str_org[i] != '\0')
    {
        i++ ;
    }

    //length = strlen(str_org) ;


    strcpy(str_cpy,str_org) ;    // Copying the string

// REVERSING THE STRING
    for(j=0 ; j<(i/2) ; j++)
    {
        temp = str_cpy[i-1-j];
        str_cpy[i-1-j] = str_cpy[j];
        str_cpy[j] = temp ;
    }
    str_cpy[i] = '\0';


   if(strcmp(str_cpy,str_org) == 0)     // Comparing two string
    {
        printf("It is palindrome string");
    }
    else
    {
        printf("It is not a palindrome string") ;
    }

    return 0 ;
}*/       





/* 13. Write a C program that takes a string from the user and reverses its characters using an iterative approach.
       Description: The program should prompt the user to enter a sequence of characters. 
       It must then swap or move the characters within the string using a loop until the entire string is reversed. 
       The final resulting string should be displayed on the screen. Pre-requisites: Loops, Strings. Operators.*/

/*#include<stdio.h>
#include<string.h>
#define SIZE 30

int main()
{
    char str[SIZE], temp;
    int length, i;

// GETTING INPUT
    printf("Enter the string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0' ;

// FINDING LENGTH
    length = strlen(str);

// REVERSING STRING    
    for(i=0 ; i<(length/2) ; i++)
    {
        temp = str[i];
        str[i] = str[length-1-i];
        str[length-1-i] = temp ;
    }
    str[length] = '\0';

// PRINTING STRING    
    i=0 ;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++ ;
    }

    return 0 ;
}*/       





/* 14. Write a C program that takes a string input from the user and determines whether it is a pangram or not.
       Description: The program should prompt the user to enter a sentence or a string of characters. 
       It must then verify if every letter of the alphabet from A to Z appears at least once within the provided text, regardless of whether the letters are uppercase or lowercase. 
       The final output should state if the string is a pangram. Pre-requisites: Loops, Strings, Conditional Statements, ASCII, Operators*/

/*#include<stdio.h>
#include<string.h>
#define SIZE 100
int main() 
{
    char str[SIZE];
    int checklist[26] = {0};  
    int i, j, letter, index, flag=1;

// Getting the Input    
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0' ;

// Checking each letter and incrementing the count    
    i=0 ;
    while(str[i] != '\0')
    {
        letter = str[i] ;
        if(letter >= 'A' && letter <= 'Z')
        {
            index = letter - 'A' ;
            checklist[index]++ ;
        }
        else if(letter >= 'a' && letter <= 'z')
        {
            index = letter - 'a' ;
            checklist[index]++ ;
        }
        i++ ;
    }

// Checking wheather any letter is absent    
    for(j=0 ; j<26 ; j++)
    {
        if(checklist[j] == 0)
        {
            flag = 0 ;
            break ; 
        }
    }

    if(flag==1)
    {
        printf("Pangram string");
    }
    else
    {
        printf("Not pangram string");
    }

    return 0 ;
}*/
       




/* 15. Write a C program that takes a string from the user and replaces every sequence of multiple consecutive spaces with a single space.
       Description: The program should prompt the user to enter a sentence that may contain several spaces between words. 
       It must then process the string to ensure that any instance where two or more blank spaces appear together is reduced to just one blank space. 
       The final cleaned string should be displayed on the screen. Pre-requisites: Loops, Strings, Conditional Statements, ASCII, Operators*/

/*#include<stdio.h>
#include<string.h>
#define SIZE 50

int main()
{
    char messy_str[SIZE] , clean_str[SIZE];
    int i, j;

    printf("Enter a string : ");
    fgets(messy_str,sizeof(messy_str), stdin);
    messy_str[strcspn(messy_str, "\n")] = '\0' ;

    i=0 ;
    j=0 ;
    while(messy_str[i] != '\0')
    {
        // If it is NOT a space, OR it IS a space but the previous one wasn't a space
        if (messy_str[i] != 32 || (i > 0 && messy_str[i-1] != 32)) 
        {
            clean_str[j] = messy_str[i] ; 
            j++ ;
        }

        i++ ; 
    }

    clean_str[j] = '\0';


    printf("%s", clean_str) ;

    return 0 ;
}*/       





/*16. Write a C program that takes a string from the user and converts all uppercase letters into their corresponding lowercase letters.
      Description: The program should prompt the user to enter a sequence of characters. 
      It must then check each character individually. If a character is an uppercase letter, the program should convert it to its lowercase equivalent. 
      If the character is already lowercase or is not a letter at all, the program should leave it exactly as it is. 
      The final modified string should be displayed on the screen. Pre-requisites: Loops, Strings, Conditional Statements, ACII.*/

/*#include<stdio.h>
#include<string.h>
#define SIZE 30

int main()
{
    char str[SIZE] ;
    int i ;
    
    printf("Enter a string : ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0' ;

    i=0 ;
    while(str[i] != '\0')
    {
        if(str[i] >= 'A' && str[i] <= 'Z' )
        {
            str[i] = str[i] + 32 ;
        }

        i++ ;
    }

    printf("%s", str);

    return 0 ;
}*/
    





/*17. Write a C program that takes a number and toggles a specific number of bits (n) starting from a given position.
      Description: The program should prompt the user to enter an integer, a starting bit position, and the number of bits to be modified. 
      It must then change the state of those (n) consecutive bits—switching 0s to 1s and 1s to 0s—while keeping all other bits in the number exactly as they were. 
      The final value of the number after the toggle operation should be displayed on the screen. 
      Pre-requisites: Bitwise operators, Loops, Assignment operators*/

/*#include<stdio.h>

void print_binary(int n);
void toggle_bit(int n, int bp) ;

int main()
{
    int n, bp;
    printf("Enter a number : ");
    scanf("%d", &n);

    print_binary(n) ;

    printf("Enter the bit position to be toggled : ");
    scanf("%d", &bp) ;

    toggle_bit(n, bp) ;

    return 0 ;
}      

void print_binary(int n)
{
    printf("Binary  : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (n>>i)&1);
    }
    printf("\n") ;
}

void toggle_bit(int n, int bp)
{
    n ^= (1<<bp) ;
    print_binary(n) ;
    printf("Decimal : %d\n", n);
}*/





/*18. Write a C program that takes an integer from the user and extracts (n) bits starting from a specific bit position.
      Description: The program should prompt the user to enter a number, a starting position, and the number of bits to be retrieved. 
      It must then isolate that specific sequence of bits from the original value and display the resulting number on the screen. 
      The other bits in the number should not affect the final output. Pre-requisites: Bitwise Operators.*/

/*#include<stdio.h>

void print_binary(int n);

int main()
{
    int n, start_bit, width, mask, field;

    printf("Enter an interger : ");
    scanf("%d", &n);
    print_binary(n);

    printf("Enter the starting bit position : ");
    scanf("%d", &start_bit) ;

    printf("Enter the number of bit to be retrived : ");
    scanf("%d", &width) ;

    // 1. Creating mask
    mask = ((1<<width) - 1) << start_bit ;

    // 2. Field Extraction
    field = (n & mask) >> start_bit ;

    printf("\nField extracted:\n") ;
    print_binary(n & mask) ;
    print_binary(field) ;
    printf("Decimal : %d\n", field);

    return 0 ;

}

void print_binary(int n)
{
    printf("Binary  : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (n>>i)&1);
    }
    printf("\n");
}*/





/*19. Write a C program that takes a number and replaces n of its bits, starting from a given position, with another set of n bits from a second number.
      Description: The program should prompt the user to enter two integers, a starting bit position, and the number of bits n to be modified. 
      It must then clear $n$ bits in the first number at the specified position and replace them with the corresponding $n$ bits from the second number. 
      The final resulting value should be displayed on the screen while all other bits in the first number remain unchanged. Pre-requisites: Bitwise Operators*/

/*#include<stdio.h>

void print_binary(int n);

int main()
{
    int n1, n2, mask, width, start_position, field;
    printf("Enter first integer : ");
    scanf("%d", &n1);
    print_binary(n1);

    printf("Enter the second integer : ");
    scanf("%d", &n2);
    print_binary(n2) ;

    printf("Enter the starting position : ");
    scanf("%d", &start_position);
    printf("Enter the width : ");
    scanf("%d", &width) ;

    // 1. Bit extraction from 2nd integer
    mask = ((1<<width) - 1) << start_position ;
    field = (n2 & mask) >> start_position ;
    printf("\nAfter Field extraction:\n");
    print_binary(field);

    // 2. Clearing the bit field of 1st integer
    n1 &= ~(mask) ;
    printf("\nn1 after clearing field:\n");
    print_binary(n1);

    // 3. Setting the field
    n1 = (n2 & mask) | n1 ;
    printf("\nAfter Field modification:\n");
    print_binary(n1);

    return 0 ;
}      

void print_binary(int n)
{
    printf("Binary  : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (n>>i)&1) ;
    }
    printf("\n");
}*/





/*20. Write a C program that takes two integers and swaps n bits starting from a given position in both numbers.
      Description: The program should prompt the user to enter two integers, a starting bit position, and the number of bits (n) to be swapped.
      It must then exchange the n consecutive bits at the specified position between the two numbers — the bits from the first number go into the second, and vice versa — while all remaining bits in both numbers stay exactly as they were. 
      Both final values should be displayed on the screen after the swap. Pre-requisites: Bitwise Operators, Loops, Assignment Operators.*/

/*#include<stdio.h>

void print_binary(int n);

int main()
{
    int n1, n2, mask, width, start_position, field_n1, field_n2, temp;

    printf("Enter first integer : ");
    scanf("%d", &n1);
    print_binary(n1);

    printf("Enter the second integer : ") ;
    scanf("%d", &n2);
    print_binary(n2);

    printf("Enter the start position : ");
    scanf("%d", &start_position);

    printf("Enter the width : ");
    scanf("%d", &width);

    // 1. Bit extraction from 1st integer
    mask = ((1<<width) - 1 ) << start_position ;
    field_n1 = (n1 & mask) >> start_position ;
    //1.1 Clear bit field
    n1 &= ~(mask) ;

    printf("\nAfter Extracting bit field of 1st integer:\n");
    printf("Extracted field in ") ;
    print_binary(field_n1);
    printf("After Clearing :\n");
    printf("n1 ");
    print_binary(n1) ;


    // 2. Bit extraction from 2nd integer
    field_n2 = (n2 & mask) >> start_position ;
    // 2.1 Clear Bit field
    n2 &= ~(mask);

    printf("\nAfter Extracting bit field of 2nd integer:\n");
    printf("Extracted field in ") ;
    print_binary(field_n2);
    printf("After Clearing :\n");
    printf("n2 ");
    print_binary(n2) ;

    // 3. Swapping Field
    n1 |= (field_n2 << start_position );
    n2 |= (field_n1 << start_position) ;
    
    // 4. Display output
    printf("\nSwapped version :\n") ;
    printf("n1 ");
    print_binary(n1);
    printf("n2 ");
    print_binary(n2) ;

    return 0 ;
}      

void print_binary(int n)
{
    printf("Binary  : ");
    for(int i=7 ; i>=0 ; i--)
    {
        printf("%d", (n>>i)&1);
    }
    printf("\n") ;
}*/





/*21. Write a C program to remove duplicate elements from a given array.
      Description: The program should prompt the user to enter the size of the array and its elements. 
      It must then identify and remove any duplicate values, ensuring that each element appears only once in the resulting array. 
      The program should finally display the updated array containing only unique elements. Pre-requisites: Arrays, Loops, Conditional Statements*/

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int arr[SIZE], limit;

    printf("Enter the size of array : ");
    scanf("%d", &limit) ;
    printf("Enter the array elements : ") ;
    for(int i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]) ;
    }

    for(int i=0 ; i<limit ; i++)
    {
        for(int j=i+1 ; j<limit ; j++)
        {
            if(arr[i] == arr[j])
            {
                for(int k=j ; k<limit-1 ; k++)
                {
                    arr[k] = arr[k+1];
                }
                limit--;
                j-- ;
            }
        }
    }

    printf("limit = %d\n", limit);

    for(int i=0 ; i<limit ; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0 ;
}  */    





/*22. Write a C program that uses an array to find the second largest and second smallest element in a list of numbers.
      Description: The program should prompt the user to enter the size of the array and its elements. 
      It must then scan through the array and determine both the second largest and second smallest values without sorting the array. 
      The program should handle duplicate values correctly — if all elements are the same, it should display an appropriate message. 
      Both results should be displayed on the screen. Pre-requisites: Arrays, Loops, Conditional Statements.*/

/*#include<stdio.h>      
#define SIZE 20 

int Second_largest(int arr[], int limit) ;
int Second_smallest(int arr[], int limit) ;

int main()
{
    int arr[SIZE], limit, ss, sl;

    printf("Enter the size of array : ") ;
    scanf("%d", &limit);

    printf("Enter the array elements : ");
    for(int i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
    }

    sl = Second_largest(arr, limit) ;
    ss = Second_smallest(arr, limit) ;

    printf("Second Largest  = %d\n", sl);
    printf("Second Smallest = %d\n", ss);

    return 0 ;
}      


int Second_largest(int arr[], int limit)
{
    int largest, second_largest ;

    if(arr[0] > arr[1])
    {
        largest = arr[0] ;
        second_largest = arr[1];
    }
    else if(arr[0] < arr[1])
    {
        largest = arr[1];
        second_largest = arr[0] ;
    }


    for(int i=2 ; i<limit ; i++)
    {
        if(arr[i] > largest)
        {
            second_largest = largest ;
            largest = arr[i];
        }
        else if(arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    printf("Largest  = %d\n", largest);

    return second_largest ;
}


int Second_smallest(int arr[], int limit)
{
    int smallest, second_smallest ;

    if(arr[0] < arr[1])
    {
       smallest = arr[0] ;
       second_smallest = arr[1] ;
    }

    for(int i=2 ; i<limit ; i++)
    {
        if(arr[i] < smallest)
        {
            second_smallest = smallest ;
            smallest = arr[i];
        }
        else if(arr[i] < second_smallest && arr[i] > smallest)
        {
            second_smallest = arr[i] ;
        }
    }

    printf("Smallest = %d\n", smallest);

    return second_smallest ;
}*/





/*23. Write a C program that rotates the elements of an array by n positions in a specified direction.
      Description: The program should prompt the user to enter the array elements, the number of positions (n) to rotate, and the direction (left or right). 
      It must then shift the elements accordingly — elements that fall off one end should reappear at the opposite end. 
      The rotation must work for any value of n, including values larger than the array size. 
      The final rotated array should be displayed on the screen. Pre-requisites: Arrays, Loops, Modulus Operator.*/

/*#include<stdio.h>
#define SIZE 20

int right_rotation(int arr[], int npr, int limit);
int left_rotation(int arr[], int npr, int limit);

int main()
{
    int arr[SIZE], limit, npr, dir;

    printf("Enter a size of array : ");
    scanf("%d", &limit);

    printf("Enter the array elements : ");
    for(int i=0 ; i<limit ; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Enter the number of position to be rotated : ");
    scanf("%d", &npr) ;

    printf("Direction of rotation:\n") ;
    printf("1.Left Rotation\n");
    printf("2.Right Rotation\n");
    printf("Enter your choice : ");
    scanf("%d", &dir) ;

    switch(dir)
    {
        case 1 : right_rotation(arr, npr, limit); break ;
        case 2 : left_rotation(arr, npr, limit); break ;
        default :printf("Invaid input"); break ;
    }

    return 0 ;
}      

int right_rotation(int arr[], int npr, int limit)
{
    int temp ;

    npr = npr % limit ;

    for(int i=0 ; i<npr ; i++)
    {
        temp = arr[limit-1] ;    // storing last value in temp

        // Right shift
        for(int j=0 ; j<(limit-1) ; j++)
        {
            arr[limit-1-j] = arr[limit-2-j] ;
        }

        arr[0] = temp ;      // restoring last value to first position
    }

    for(int i=0 ; i<limit ; i++)
    {
        printf("%d ", arr[i] );
    }
}

int left_rotation(int arr[], int npr, int limit)
{
    int temp ;
    
    npr = npr % limit;

    for(int i=0 ; i<npr ; i++)
    {
        temp = arr[0] ;    // storing first value in temp

        // Left shift
        for(int j=0 ; j<(limit-1) ; j++)
        {
            arr[j] = arr[j+1] ;
        }

        arr[limit-1] = temp ;      // restoring first value to last position
    }

    printf("\n\n") ;
    for(int i=0 ; i<limit ; i++)
    {
        printf("%d ", arr[i] );
    }
}*/





/*24. Write a C program that merges two sorted arrays into a single sorted array without using any sorting function.
      Description: The program should prompt the user to enter the sizes and elements of two arrays, each already sorted in ascending order. 
      It must then merge them into a third array by comparing elements from both arrays one by one and placing the smaller element first, continuing until all elements are placed. 
      The final merged sorted array should be displayed on the screen. Pre-requisites: Arrays, Loops, Multiple Array Handling.*/

/*#include<stdio.h>
#define SIZE 30
int main()
{
    int arr1[SIZE], arr2[SIZE], limit1, limit2, arr3[SIZE], limit3;
    int i, j, k;

    // Getting Input
    printf("Enter the size of first array : ");
    scanf("%d", &limit1);
    printf("Enter the array elements in ascending order : ");
    for(i=0 ; i<limit1 ; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of second array : ");
    scanf("%d", &limit2);
    printf("Enter the array elements in ascending order : ");
    for(i=0 ; i<limit2 ; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Core Part
    i=0;
    j=0;
    k=0 ;
    while(i<limit1 && j<limit2)
    {
       if(arr1[i] <= arr2[j])
       {
            arr3[k] = arr1[i] ;
            i++ ;
            k++ ;
       }
       else if(arr2[j] < arr1[i])
       {
            arr3[k] = arr2[j];
            j++ ;
            k++ ;
       }
    }

    while(i<limit1)        // If arr1 has left over
    {
        arr3[k] = arr1[i] ;
        i++ ;
        k++ ;
    }

    while(j<limit2)       // If arr2 has left over
    {
        arr3[k] = arr2[j] ;
        j++ ;
        k++ ;
    }

    
    // Printing Combined array
    limit3 = limit1 + limit2 ;

    for(k=0 ; k<limit3 ; k++)
    {
        printf("%d ", arr3[k]);
    }

    return 0 ;
}*/      





/* 25. Write a C program that finds all pairs of elements in an array whose sum equals a given target value. 
       Description: The program should prompt the user to enter the size of the array, its elements, and a target sum. 
       It must then examine all possible pairs of elements in the array and identify every pair whose sum matches the target. 
       Each valid pair should be printed on the screen. If no such pair exists, an appropriate message should be displayed. 
       The same element should not be paired with itself. Pre-requisites: Arrays, Nested Loops, Conditional Statements.*/

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int arr[SIZE], limit, target_value ;
    int i, j, flag=1;

    // step 1 : Getting input
    printf("Enter the size of array : ");
    scanf("%d", &limit);

    printf("Enter the array elements : ");
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum : ");
    scanf("%d", &target_value);

    // step 2 : Core Part
    
    i=0 ;
    while(i < limit)
    {
        j=i+1 ;
        while(j < limit)
        {
            if((arr[i] + arr[j]) == target_value)
            {
                printf("%d + %d = %d\n", arr[i], arr[j], target_value) ;
                flag = 0 ;
            }

            j++ ;
        }

        i++ ;
    }

    if(flag == 1)
    {
        printf("No such pair exist");
    }

    return 0 ;
}*/





/*26. Write a C program that rearranges an array such that all negative numbers appear before all positive numbers while preserving the relative order of both groups.
      Description: The program should prompt the user to enter the size of the array and its elements (a mix of positive and negative integers).
      It must then rearrange the elements so that all negative numbers come first, followed by all positive numbers, without changing the order in which the negatives appear among themselves or the positives among themselves. 
      Zero can be treated as positive. The rearranged array should be displayed on the screen. Pre-requisites: Arrays, Loops, Temporary Storage, Order Preservation Logic.*/

/*#include<stdio.h>
#define SIZE 20
int main()
{
    int arr[SIZE], limit, temp_arr[SIZE] = {0};
    int i, j;

    // step 1 : Getting Input
    printf("Enter the size of array : ");
    scanf("%d", &limit);

    printf("Enter the array elements : ");
    for(i=0 ; i<limit ; i++)
    {
        scanf("%d", &arr[i]);
    }

    // step 2 : Core part 
    j=0 ;
    for(i=0 ; i<limit ; i++)
    {
        if(arr[i] < 0)
        {
            temp_arr[j] = arr[i] ;
            j++ ;
        }
    }

    for(i=0 ; i<limit ; i++)
    {
        if(arr[i]>= 0)
        {
            temp_arr[j] = arr[i] ;
            j++ ;
        }
    }

    //step 3 : printing output
    for(i=0 ; i<limit ; i++)
    {
        arr[i] = temp_arr[i] ;
        printf("%d ", arr[i]);
    }

    return 0 ;
}*/      





/*27. Define a structure Complex with real and imaginary parts. Write a C program to add two complex numbers and display the result.
      Description: The program should define a structure to represent a complex number with two members: real part and imaginary part. 
      It must then create functions to perform addition of two complex numbers and to display a complex number in a readable format (e.g., a + bi). 
      The program should take input for two complex numbers, compute their sum using the defined function, and print the result. 
      Pre-requisites: Structures, Functions, Basic Arithmetic Operations, Input/Output*/

/*#include<stdio.h>

typedef struct
{
    int real_part ;
    int imag_part ;
} Comp_num ;

Comp_num add_complex(Comp_num n1, Comp_num n2);

int main()
{
    Comp_num n1, n2, result;

    printf("Enter first complex numbers : ");
    scanf("%d%d", &n1.real_part, &n1.imag_part);
    printf("Enter second complex number : ");
    scanf("%d%d", &n2.real_part, &n2.imag_part);

    result = add_complex(n1,n2);

    printf("Sum = %d + %dj \n", result.real_part, result.imag_part);

    return 0 ;
}      

Comp_num add_complex(Comp_num n1, Comp_num n2)
{
    int real , imag ;
    Comp_num sum ;

    sum.real_part = n1.real_part + n2.real_part;
    sum.imag_part = n1.imag_part + n2.imag_part ;

    return sum;
}*/