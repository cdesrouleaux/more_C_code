//
//  main.c
//  ChristopherDesrouleaux_Assign6
//
//  Created by Christopher Desrouleaux on 10/15/21.
//

#include <stdio.h>
#include <math.h>

double fun_1 (double guess1, double n);
double fun_2 (void);

/*the main function will store the square root of n*/
int main()
{
    double result2 = 1, result1, diff, sqrtResult1, root = 0;
    int numofLoops = 0;
    
    result1 = fun_2();
    sqrtResult1 = sqrt(result1);
    printf("Next guess values:\n");
    
    do
    {
        result2 = fun_1(result2, result1);
        diff = fabs(result2 - sqrtResult1);
        numofLoops++;
    }
    while (diff >= 0.005);
    
    root = result2;
    printf("Square root of %f = %f\n", result1, sqrtResult1);
    printf("Iterations: %d\n", numofLoops);
    printf("Error: %.2e\n", diff);

    return 0;
}
/*this function calculates the value of guess 2 */
double fun_1 (double guess1, double n)
{
    double g2;
    g2 = 0.5 * (guess1 + n / guess1);
    printf("%f\n",g2);
    return(g2);
}
/* asks the user to enter number greater than 0 and return the value */
double fun_2 (void)
{
    double n = 0;
    printf("Any positive N: ");
    scanf("%lf", &n);
    return(n);
}
