//
//  main.c
//  11ChristopherDesrouleaux_Assignment
//
//  Created by Christopher Desrouleaux on 11/9/21.
//

#include <stdio.h>
#include <math.h>

void gimmeMoney(int gimmeChange, double *quartersPtr, double *dimesPtr, double *nicklesPtr, double *penniesPtr);

int main()
{
    int userChange, userDollar, q,n,d,p;
    double quarters, nickles, dimes, pennies;
    
    printf("Enter expected change amount from purchase? (enter: ex. 1.77) >> ");
    scanf("%d.%d", &userDollar, &userChange);
    printf("Expected change: $%d.%d\n\n", userDollar, userChange);
    printf("Dollar bills: %d\n", userDollar);

    gimmeMoney(userChange, &quarters, &dimes, &nickles, &pennies);
    
    q = (int)quarters;
    n = (int)nickles;
    d = (int)dimes;
    p = (int)pennies;
    
    printf("Quarters: %d\n", q);
    printf("Dimes: %d\n", d);
    printf("Nickles: %d\n", n);
    printf("Pennies: %d\n\n", p);
    
    return 0;
}

// Function purpose is to denomoniate the chage into coins.
void gimmeMoney(int gimmeChange, double *quartersPtr, double *dimesPtr, double *nicklesPtr, double *penniesPtr)
{
    *quartersPtr = gimmeChange / 25;
    gimmeChange = (int)gimmeChange % 25;
    
    *dimesPtr = gimmeChange / 10;
    gimmeChange = (int)gimmeChange % 10;
    
    *nicklesPtr = gimmeChange / 5;
    gimmeChange = (int)gimmeChange % 5;
    
    *penniesPtr = gimmeChange / 1;
    gimmeChange = (int)gimmeChange % 1;
}
