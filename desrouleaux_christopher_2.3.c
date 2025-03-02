/*
COP3223 Spring 2023 2.3
Copyright 2023 Desrouleaux Christopher
*/

int greatest_common_divisor(int x, int y);

#include <stdio.h>

int main()
{
    
    int a, b, gcd;
    printf("Please input the first number: ");
    scanf("%d",&a);
    printf("Please input the second number: ");
    scanf("%d",&b);
    
    gcd = greatest_common_divisor(a,b);
    printf("the commom divisor for %d and %d is %d\n", a, b, gcd);

    
    return 0;
}


int greatest_common_divisor(int x, int y)
{
    int greatcomd;
    
    if (y==0)
        greatcomd = x;

    else
        greatcomd = x % y;

    
    return greatcomd;
    
}
