//
//  main.c
//  Assignment4
//
//  Created by Christopher Desrouleaux on 9/26/21.
//  Purpose - Using switch statements to get desired outputs

#include <stdio.h>
#include <math.h>
int main()
{
    char select;
    printf("Select a menu option:\n");
    printf("a. Information about the two programs\n");
    printf("b. BMI calculator\n");
    printf("c. Point on cartesian plane locater\n");
    printf("d. Exit option\n\n");
    scanf("%c", &select);
    
    int bmi;
    int lbs = 0, height_in = 0;
    int x, y;
    
    switch (select) {
        case 'a':
            printf("You selected: Information about the two programs\n");
            printf("Program b is designed to calculate a users Body Mass Indes (BMI)\n");
            printf("Program c is designed to locate a point on the Cartesian Plane\n");
            break;
            
            
            
            
        case 'b':
            printf("You selected: BMI calculator\n");
            printf("Enter your weight pounds %d\n", lbs);
            scanf("%d", &lbs);
            printf("Enter your height in inches %d\n", height_in);
            scanf("%d", &height_in);
            printf("You are %d inches tall and weigh %d pounds\n\n", height_in, lbs);
            
            bmi = (703 * lbs)/ pow(height_in,2);
            
            if (bmi < 18.5)
                printf("Weight Status: Underweight\n");
                else if (bmi >= 18.5 && bmi <= 24.9)
                    printf("Weight Status: Normal\n");
                else if (bmi >= 25.0 && bmi <= 29.9)
                    printf("Weight Status: Overweight\n");
                else if (bmi > 30.0)
                    printf("Weight Status: Obese\n");
            
            printf("Your BMI is: %3.1d\n", bmi);
            break;
            
            
            
               
        case 'c':
            printf("You selected: Point on cartesian plane locater\n");
            printf("Enter an (x,y) cordinate to find which quadrant it lies\n");
            printf("x = ");
            scanf("%d", &x);
            printf("y = ");
            scanf("%d", &y);
            printf("You entered: (%d, %d)\n", x,y);
            
            if (x > 0 && y > 0)
                printf("(%d, %d) is in Q1\n", x,y);
                else if (x < 0 && y > 0)
                    printf("(%d, %d) is in Q2\n", x,y);
                else if (x < 0 && y < 0)
                    printf("(%d, %d) is in Q3\n", x,y);
                else if(x > 0 && y < 0)
                    printf("(%d, %d) is in Q4\n", x,y);
                else if (x==0 && y==0)
                    printf("(%d, %d) is on the origin\n", x,y);
                else if (x == 0)
                    printf("(%d, %d) is on the x-axis\n", x,y);
                else if (y == 0)
                    printf("(%d, %d) is on the y-axis\n", x,y);
            break;
            
            
            
            
        case 'd':
            printf("good bye\n");
            break;
        default:
            printf("Invalid input. Please try again.\n");
            break;
    }
    
    
    return 0;
}
