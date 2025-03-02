//
/*
COP3223 Spring 2023 Assignment 1.1
Copyright 2023 Desrouleaux Christopher
*/
//

/* Purpose - This code is to calculate the sum, average, and product of 3 integers inputed by the user as well as outputting the smallest and largest of thoes integers entered. */

#include <stdio.h>

int main()
{
    int a,b,c, sum, avg, p;
    
    printf("Enter three different integers: ");
    scanf("%d %d %d", &a, &b, &c);
    
    printf("\nThe sum is: %d\n", sum = a+b+c);
    printf("The average is: %d\n", avg = sum/3);
    printf("The product is: %d\n\n", p = a*b*c);
    
    
    //which int is smallest
    int i=a;
    
    if (i>b)
        i = b;
    if (i>c)
        i = c;
    
    printf("Smallest is: %d\n", i);
    
    //which int is largest
    int j=a;
    
    if (j<b)
        j = b;
    if (j<c)
        j = c;
    
    printf("Largest is: %d\n", j);
    
    
   
    return 0;
}
