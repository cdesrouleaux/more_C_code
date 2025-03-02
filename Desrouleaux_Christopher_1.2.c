//
/*
COP3223 Spring 2023 Assignment 1.1
Copyright 2023 Desrouleaux Christopher
*/
//

//Codes Purpose - Calculate employees gross salary with the given values: hours worked and hourly wage.

#include <stdio.h>

int main()
{
    int hrs=0, first40, over40, ot_hrs;
    double rate1, rate2, salary=0;
    
    
    while (hrs != -1)
    {
        printf("Enter # of hours worked (-1 to end): ");
        scanf("%d", &hrs);
        
        // ends program when condition is true
        if (hrs == -1)
            break;
        
        printf("Enter hourly rate of the worker ($00.00): ");
        scanf("%lf", &rate1);
        
        // this if statement is used for employees who work less than 40 hrs per week
        if (hrs <= 40)
        {
            salary = (rate1*hrs) * 52;
        }
        
        // this if statement accounts for overtime hours worked
        if (hrs > 40)
        {
            
            ot_hrs = hrs - 40;
            rate2 = rate1 * 1.5;
            
            first40 = 40 * rate1;
            over40 = ot_hrs *rate2;
            
            salary = (first40+over40) * 52;
        }
        
        printf("Salary is $%.2lf\n\n", salary);
    }
        

    
    return 0;
}
