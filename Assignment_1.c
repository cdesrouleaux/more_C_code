//
//  main.c
//  ChristopherDesrouleaux_Assign2
//
//  Created by Christopher Desrouleaux on 9/13/21.
//

#include <stdio.h>
#include <math.h>
int main() {
    printf("Smile Smile!\n"); // First print statement
    printf("Joy\n");          // Second print statement
    printf("Gratitude\n");    // Still the second print statement
    printf("Work Hard\n");    // Third and fourth print statements
    printf("Play Harder\n\n");  // Fifth print statement
    
    double average, std_dev;
    int num_1, num_2, num_3;
    
    printf("\nPlease enter three integers numbers to find their average: \n");
    scanf("%d %d %d", &num_1, &num_2, &num_3);
    printf("You entered %d, %d, %d\n", num_1, num_2, num_3);
    average= (((double)num_1 + (double)num_2 + (double)num_3)/3);
    printf("The average of three values %d, %d and %d is %6.2f\n", num_1, num_2, num_3, average);
    
    /* pow function was not working on xcode
     std_dev = sqrt((pow(num_1-average),2) + (pow(num_2-average),2)) + (pow(num_2-average),2))/3); */
    std_dev = sqrt((((num_1-average)*(num_1-average)) + ((num_2-average)*(num_2-average)) + ((num_3-average)*(num_3-average)))/3);
    printf("\nStandard Deviation is equal to %6.3f\n",std_dev);
    
    
    return 0;
}
