//
//  main.c
//  ChristopherDesrouleaux_assignment8
//
//  Created by Christopher Desrouleaux on 10/30/21.
//

#include <stdio.h>
#define SIZE 20

// protyping function
void barries1(int userInput[], int final[], double percent[], int size);

int main()
{
    int num = 0, index = 0, count = 0;
    int p[SIZE] = {0}, q[SIZE];
    double w[SIZE];
    
    printf("Please enter a sequence of integers ending with the sequence with -1 >\n");

    // this loop takes the users input 
    do
    {
        p[count] = num;
        count++;
        scanf("%d", &num);
    }
    while(count < 20 && num != -1);

    for(int i = 0; i < SIZE; i++)
        printf("You entered %d\n", p[i]);

    //this loop calls the module arrays in a tabular format
    printf("\nIndex:       Value:    %% of total: \n");
    for(int i = 1; i < SIZE; i++)
    {
        barries1(p, q, w, SIZE);
        printf("%2d %12d %12.2f\n", index, p[i], w[i]);
        index++;
    }
    
    return 0;
}
// this module generates the percent of each value in the array by taking the userInput / total of all numbers entered * 100.
void barries1(int userInput[], int final[], double percent[], int size)
{
    int total = 0;
    
    for(int i = 0; i < size; i++)
    {
        total += userInput[i];
    }

    for(int i = 0; i < size; i++)
    {
        final[i] = total;
        percent[i] = ((double)userInput[i] / final[i]) * 100;
    }
}
