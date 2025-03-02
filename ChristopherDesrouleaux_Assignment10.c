//
//  main.c
//  ChristopherDesrouleaux_Assignment10
//
//  Created by Christopher Desrouleaux on 11/28/21.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

char fix_caps (char str[]);
void change_asterisk (const char str[], char new[]);
void reverse_reverse (char flip[]);
void nouns(char str[]);


#define SIZE 200

int main()
{
    char first[SIZE] = "\0";
    char last[SIZE] = "\0";
    char quote[SIZE] = "\0";
    char ln[SIZE] = "\0";
    char plurl[SIZE] = "\0";

    printf("Please enter your first name press enter followed by your last name enter: ");
    gets(first);
    gets(last);
    
    printf("Hello, ");
    puts(strcat(first, last));
    
    char Y = fix_caps(first);
    printf("Your initials are: %c", Y);
    Y = fix_caps(last);
    printf("%c", Y);

    printf("\nEnter your favorite quote: \n");
    gets(quote);
    change_asterisk(quote, ln);
    for (int i = 0; i < SIZE; i++)
        printf("%c", ln[i]);
    
    printf("\nIn reverse: ");
    reverse_reverse(quote);
    for (int i = 0; i < SIZE; i++)
        printf("%c", quote[i]);
    
    for (;;)
    {
        printf("\nEnter a noun in singular form: \n");
        scanf("%s", plurl);

        if (strcmp(plurl, "QUIT") == 0)
            break;

        nouns(plurl);
    }
    return 0;
}

// this module changes any character into an uppercase character
char fix_caps (char str[])
{
    long int c = strlen(str);
    
    if (c == 0)
    {
        return ' ';
    }
    else
    {
        return toupper(str[0]);
    }
}

// this module changes any spaces or punctuation into an asterisk
void change_asterisk (const char str[], char new[])
{
    long int c = strlen(str);

    for (int i = 0; i < c; i++)
    {
        new[i] = str[i];
        if(isspace(str[i]) == 1 || ispunct(str[i]) == 1)
        {
            new[i] = '*';
        }
    }
}

// this module reverses the order of the words in a string
void reverse_reverse (char flip[])
{
    long int i = 0, index = 0, len = strlen(flip), front = len - 1, back = len - 1;
    char temp[SIZE];
    while(front > 0)
    {
        if (isspace(flip[front]))
        {
            i = front + 1;
            while (i <= back)
            {
                temp[index]= flip[i];
                i++;
                index++;
            }
            temp[index++] = ' ';
            back = front - 1;
        }
        front--;
    }
    
    for (int i = 0; i <= back; i++)
    {
        temp[index]= flip[i];
        index++;
    }
    
    temp[index]= '\0';
    strcpy(flip, temp);
}

// this module can take any noun and pluralize it
void nouns(char str[])
{
    long int n = strlen(str);
        if (str[n - 1] == 'y')
        {
            str[n - 1] = 'i';
            printf("%ses\n", str);
        }
        else if (n > 1 && (str[n - 1] == 's' || (str[n - 2] == 'c' && str[n - 1] == 'h') || (str[n - 2] == 's' && str[n - 1] == 'h')))
        {
            printf("%ses\n", str);
        }
        else
        {
            printf("%ss\n", str);
        }
}

// CITATIONS:
//https://stackoverflow.com/questions/7247330/c-programming-singular-to-plural-nouns
