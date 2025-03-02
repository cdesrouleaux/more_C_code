//
//  main.c
//  Assignment 3.3
//
//  Created by Christopher Desrouleaux on 3/24/23.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50

int main()

{
    int i=0, j;
    unsigned long lenght, k;
    char c;
    char r1[50];
    char r2[50];
//    char hold[50];
//    char d[50];
//    char *ptr = r1;
//
    printf("Please enter a line of text: \n");
//    gets(r1);
    
    while ((c = getchar()) != '\n' && i < SIZE - 1)
    {
            r1[i] = c;
            i++;
    }
    r1[i] = '\0';
//    puts(r1);
    
    printf("=====Change the string to upper case=====\n");
    
    lenght = strlen(r1);
    for (j=0; j < lenght; j++)
    {
        r2[j] = toupper(r1[j]);
        printf("%c", r2[j]);
    }
        
        
    printf("\n=====Reverse string=====\n");
    
    for (k = lenght; k > 0; k--)
        printf("%c", r2[k]);
        
    
    printf("\n=====Print the tokens=====\n");
    
    for (int i = 0; i < lenght; i++)
    {
        if (isspace(r1[i]) == 1)
            printf("%c\n", r1[i]);
    }
    
    return 0;
}
