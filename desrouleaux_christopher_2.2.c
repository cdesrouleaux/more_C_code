/*
COP3223 Spring 2023 Assignment 2_2
Copyright 2023 Desrouleaux Christopher
*/

// Purpose - Guess that number the game. Only 8 chances!

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int random_number_gen(int x);
void guess_number_level1(void);
void guess_number_level2(void);
void guess_number_level3(void);


int main()
{
    int level, playagain=1;
    
    while (playagain != 0)// would like to play again. (1 for yes or 0 for no)
    {
        printf("Let's play Guess the Number\n");
        printf("Pick a difficulty level (1,2,3): ");
        scanf("%d", &level);
    
        // chooses between 3 difficulty levels
        switch (level)
        {
            case 1:
                guess_number_level1();
                break;
    
            case 2:
                guess_number_level2();
                break;
    
            case 3:
                guess_number_level3();
                break;
        }
        printf("Would like to play again? (1 for yes or 0 for no): ");
        scanf("%d", &playagain);
    }

    
    return 0;
}


// generates a random number
int random_number_gen(int x)
{
    unsigned int randomnumber;
    srand(time(NULL));
    randomnumber = 1 + rand() % x;
    printf("%d", randomnumber);
    
    return randomnumber;
}


// asks for user input and gives the user 8 chances to guess a number between 1 to 10
void guess_number_level1(void)
{
    
    unsigned int randomnumber = random_number_gen(10);
    
    int guess, count=1;
    printf("I have my number. What's your guess? ");
    scanf("%d", &guess);
    
    do
    {

        if (guess == randomnumber)
        {
            printf("You got it in %d guesses!\n", count);
            break;
        }
        
        if (guess < randomnumber)
        {
            printf("Too low. Guess again: ");
            scanf("%d", &guess);
        }
            
        if (guess > randomnumber)
        {
            printf("Too high. Guess again: ");
            scanf("%d", &guess);
        }
        
        count++;
        
        if (count == 8)
            printf("Better luck next time\n");
        
        
    } while (count < 8);
    
}


// asks for user input and gives the user 8 chances to guess a number between 1 to 100
void guess_number_level2(void)
{
    
    unsigned int randomnumber = random_number_gen(100);
    
    int guess, count=1;
    printf("I have my number. What's your guess? ");
    scanf("%d", &guess);
    
    do
    {

        if (guess == randomnumber)
        {
            printf("You got it in %d guesses!\n", count);
            break;
        }
        
        if (guess < randomnumber)
        {
            printf("Too low. Guess again: ");
            scanf("%d", &guess);
        }
            
        if (guess > randomnumber)
        {
            printf("Too high. Guess again: ");
            scanf("%d", &guess);
        }
        
        count++;
        
        if (count == 8)
            printf("Better luck next time\n");
        
        
    } while (count < 8);

}


// asks for user input and gives the user 8 chances to guess a number between 1 to 1000
void guess_number_level3(void)
{
    
    unsigned int randomnumber = random_number_gen(1000);
    
    int guess, count=1;
    printf("I have my number. What's your guess? ");
    scanf("%d", &guess);
    
    do
    {

        if (guess == randomnumber)
        {
            printf("You got it in %d guesses!\n", count);
            break;
        }
        
        if (guess < randomnumber)
        {
            printf("Too low. Guess again: ");
            scanf("%d", &guess);
        }
            
        if (guess > randomnumber)
        {
            printf("Too high. Guess again: ");
            scanf("%d", &guess);
        }
        
        count++;
        
        if (count == 8)
            printf("Better luck next time\n");
        
        
    } while (count < 8);

}


