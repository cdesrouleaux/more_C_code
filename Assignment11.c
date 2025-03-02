//
//  main.c
//  Final Exam Review
//
//  Created by Christopher Desrouleaux on 12/11/21.
//

#include <stdio.h>
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int begin, int end);


int main()
{
    char srt[500];
    
    printf("Enter a string: ");
    gets(srt);
    
    char n_str[500];
    
    unsigned long n = strlen(srt);
    
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if ('a' <= srt[i] && srt[i] <= 'z')
        {
            n_str[j++] = srt[i];
        }
        else if ('A' <= srt[i] && srt[i] <= 'Z')
        {
            n_str[j++] = srt[i] - 'A' + 'a';
        }
        else if ('0' <= srt[i] && srt[i] <= '9')
        {
            n_str[j++] = srt[i];
        }
    }
    n_str[j] = '\0';
    
    unsigned int new_n = strlen(n_str);

    int result = isPalindrome(n_str, 0, new_n -1);

    if (result == 1)
    {
        printf("The string given is a palindrom\n");
    }
    else
    {
        printf(" The string given is not palindrom\n");
    }
    return 0;
}
// checks if the characters are the same spelled forward as they are backwards
int isPalindrome(char str[], int begin, int end)
{
    if (begin < end)
    {
        if (str[begin] != str[end])
        {
            return 0;
        }
        else
        {
            return isPalindrome(str, begin + 1, end - 1);
        }
    }
    else
    {
        return 1;
    }
}
