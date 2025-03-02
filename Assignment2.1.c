//
//  main.c
//  Assignment 2.1
//
//  Created by Christopher Desrouleaux on 2/26/23.
//
// Purpose - to print a diamond shape

#include <stdio.h>

int main()
{
    int input=0, odd=0;
    int top = 0, n_lineupdate1=1, space1=0;
    int bottom = 0, space2 = 0;

    // this while loop continues to ask for a user input if the input is not both less than or equal to 19 and odd
    while (odd != 1)
    {
        printf("Please enter number of rows (odd nummber): ");
        scanf("%d", &input);
        
        if(input > 19)
            continue;
        
        odd = input % 2;
    }
    
    // this function outputs the top part of the diamond
    int update1 = input/2;
    for(n_lineupdate1=1; n_lineupdate1<=input; n_lineupdate1+=2)
    {
        for(space1=update1;space1>=1;space1--)
            printf(" ");
        update1--;
        
        for(top=0; top<n_lineupdate1; top++)
            printf("*");
        
        printf("\n");
    }
    // this function outputs the bottom part of the diamond
    int update2 = 1;
    for(int n_lineupdate2 = input-2; n_lineupdate2>=1; n_lineupdate2-=2)
    {
        for(space2 = 0;space2 < update2; space2++ )
            printf(" ");
        update2++;
        
        for(bottom=n_lineupdate2; bottom>=1; bottom--)
            printf("*");
           
        printf("\n");
    }
    
    return 0;
}
