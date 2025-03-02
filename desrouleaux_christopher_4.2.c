/*
COP3223 Spring 2023 Assignment 4.2
Copyright 2023 Desrouleaux Christopher
*/
// Purpose - converts fahrenheit to celsius

#include <stdio.h>
#include <math.h>

int main()
{
    // initalize variables
    float fahrenheit=0, celsius;
    int exit=0;
    
    // loop makes sure users input is within range 0-212 F
    while (exit != 1)
    {
        printf("Please enter the temperature in Fahrenheit: "); scanf("%f", &fahrenheit);
        
        // exits if user input meets range requirenment
        if (fahrenheit >= 0 && fahrenheit <= 212)
            exit = 1;
        else
        {
            printf("Try a temperature between 0-212\n");
            exit = 0;
        }
        
    }
    
    // fahrenheit to celsius conversion formula
    celsius = 5.0 / 9.0 * (fahrenheit - 32);
    
    // outputs conversion with + and - signs// prints with 15 characters.
    if (celsius > 0)
    {
        printf("Fahrenheit     Celsius\n");
        printf("%0.3f %+15.3f\n", fahrenheit, celsius);
    }
    
    else
    {
        printf("Fahrenheit      Celsius\n");
        printf("%0.3f %15.3f\n", fahrenheit, celsius);
    }
    
    return 0;
}
