//
//  main.c
//  Assign3
//
//  Created by Christopher Desrouleaux on 9/21/21.
//

#include <stdio.h>
#include <math.h>

int main() {
    // t is time in hours
    // Temp1 is temperature in deg C
    // Temp2 is temperature in deg F
    double hrs, min;
    double Temp1, Temp2, t;
    
    printf("OH MY GOODNESS THE POWER HAS GONE OUT!? THAT SUCKS!!\n");
    printf("How many many hours and minutes has it been since the power has gone out?\n (enter values as whole numbers in consecutive order)\n");
    scanf("%lf %lf", &hrs, &min);
    printf("You entered %3.0lf hours %3.0lf minutes.\n", hrs, min);
    
    min = min/60;
    t = hrs + min;
    
    Temp1 = ((4*t*t)/(t+2))-20;
    Temp2 = (Temp1 * 9/5)+32;
            
    printf("The current temperature of your freezer is\n %3.1f C\n %3.1f F\n", Temp1, Temp2);
    
    if (Temp1 <= -10)
        printf("aww bye bye ice cream time :(\n");
    else
        printf("your ice cream is still safe\n");
    
    
    if (Temp1 >= 4.5)
        printf("THE MEAT AND POULTRY WENT BAD EW GET RID OF IT!\n");
    else
        printf("your meat is still safe\n");
    
    
    
    return 0;
}
