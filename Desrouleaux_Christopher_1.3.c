//
/*
COP3223 Spring 2023 Assignment 1.3
Copyright 2023 Desrouleaux Christopher
*/
//

// Purpose - To have the user enter a five-digit number and to check wether or not it is a palindrome number (ex. 12321, 55555, 45554 and 11611)

#include <stdio.h>

int main()
{
    int n, f1, f2, f3, f4, f5;
    
    printf("Enter a five-digit integer: ");
    scanf("%d", &n);
    
    // this combination of remainder and division operators seperates the five-digit integer into single digits
    f1 = (n % 10);
    f2 = (n % 100) / 10;
    f3 = (n % 1000) / 100;
    f4 = (n % 10000) / 1000;
    f5 = (n % 100000) / 10000;
    
    // this if else block checks whether or not the five-digit number entered is a palindrome number
    if (f1 == f5)
    {
        if (f2 == f4)
            printf("%d%d%d%d%d is a palindrome number \n", f1,f2,f3,f4,f5);
    }
    else
     printf("%d is not a palindrome number \n", n);
    
    
    return 0;
}
