//
//  main.c
//  ChristopherDesrouleaux_Assign5
//
//  Created by Christopher Desrouleaux on 10/2/21.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define PI 3.14159265

int main()
{
    int n, count = 1;
    double proxi;
    unsigned long int fact = 1;
    double perc_e;
    int try = 0;
    
    do
    {
        
        do
        {
            printf("Please enter a positive integer to calculate the facrotial.\n");
            scanf(" %d", &n);
            printf("You entered %d\n", n);
        }
        while (n < 0);
        
        // computes the product n x (n-1) x (n-2) x...
        
        for (count = 1; count <= n; count++)
        {
            fact = fact * count;
        }
        printf("Factorial of %d! is equal to %.0lu\n\n", n, fact);
        
        proxi = pow(n,n) * exp(-n) * (sqrt((2*n + (1/3)) * PI));
        
        printf("%d! equals approximately %.5f\n", n, proxi);
        printf("%d! is %.0lu accurately.\n\n", n, fact);
        
        perc_e = (fabs(fact - proxi) / fact ) * 100;
        printf("This factorial has a percent error of %.4f\n", perc_e);
    
        printf("Would you like to try again? (enter 1 for Yes, 0 for No)\n");
        scanf("%d", &try);
    }
    while (try == 1);
    
    
    return 0;
}
