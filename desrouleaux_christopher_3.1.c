/*
COP3223 Spring 2023 3_1
Copyright 2023 Desrouleaux_Christopher
*/
//
// Purpose - To assign seats on each flight of the airline’s only plane (capacity: 6 seats).

int random_num(int);
int search_seat(int);
void print_boarding_pass(int);

#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


int main()
{
    int travel_classes, count=0, count1=1, count2=1, full=0, i=3,j=3, query1, query2, ask=0;
  
    while (full != 1)
    {
        // --- asks if all passengers have boarded
        if (ask > 0)
        {
            printf("Has everyone boarded? (1 yes 0 no)  \n");
            scanf("%d", &full);
        }
        ask++;

        if (full == 1)
        {
            printf("Next flight leaves in 3 hours\n");
            break;
        }
        // ---
        printf("Please type 1 for first class\n");
        printf("Please type 2 for economy\n");
        scanf("%d", &travel_classes);
        
        
        // switch statement checks and displays flight availability and seat number
        switch (travel_classes)
        {
            // in case passanger desires a first class ticket
            case 1:
                if (count1 < 4)
                {
                    printf("(customer %d with first class)\n", count1);
                    print_boarding_pass(travel_classes); // passes the class of seat the user wants to book first class (1) or economy (2) and returns an available seat number
                }
                count1++;
                
                if (count1 > 4)
                {
                    if (i == 3)
                    {
                        count+=i;
                        i++;
                    }
                    
                    if (count >= 6)
                    {
                        printf("(all seats are book, no seat available)\n");
                        printf("Next flight leaves in 3 hours\n");
                        break;
                    }
                    printf("(customer %d with first class, no seats available in first class)\n", count1-1);
                    
                    // when first class is booked out gives the user the option of economy
                    if (count2 <= 3)
                    {
                        printf("Does he/she want seat in economy? (1 yes 0 no)  ");
                        scanf("%d", &query1);
                        
                        if (query1 == 1)
                        {
                            printf("\n(customer %d with economy)\n", count2);
                            count2++;
                        }
                        else
                        {
                            printf("Next flight leaves in 3 hours\n");
                        }
                    }
                }
                break;
                
                
            // in case passanger desires a economy ticket
            case 2:
                if (count2 < 4)
                {
                    printf("(customer %d with economy)\n", count2);
                    print_boarding_pass(travel_classes); // passes the class of seat the user wants to book first class (1) or economy (2) and returns an available seat number
                }
                count2++;
                
                if (count2 > 4)
                {
                    if (j == 3)
                    {
                        count+=j;
                        j++;
                    }
                    
                    if (count >= 6)
                    {
                        printf("(all seats are book, no seat available)\n");
                        printf("Next flight leaves in 3 hours\n");
                        break;
                    }
                    printf("(customer %d with economy, no seats available in economy)\n", count2-1);
                    
                    // when economy is booked out gives the user the option of first class
                    if (count1 <= 3)
                    {
                        printf("Does he/she want seat in first class? (1 yes 0 no)  ");
                        scanf("%d", &query2);
                        
                        if (query2 == 1)
                        {
                            printf("\n(customer %d with first class)\n", count1);
                            count1++;
                        }
                        else
                        {
                            printf("Next flight leaves in 3 hours\n");
                        }
                    }
                }
                
                break;
        }
    }
    
        
    return 0;
}

// generates a random seat number
int random_num(int a_class)
{
    unsigned int randomnumber=0;
    srand(time(NULL));
    
    switch (a_class)
    {
        // generates a random seat in first class
        case 1:
            randomnumber = 1 + rand() % 3;
            break;
        // generates a random seat in economy
        case 2:
            randomnumber = 4 + rand() % 3;
            break;
    }

    return randomnumber;
}

int seatingchart[6] = {0};
int booked;
int search_seat(int z_class)
{
    int checkavail;
    static int booked = 0;
    
    // passes the class of seat the user requested to book first class/ economy. Also returns a random seat not yet booked in said class
    checkavail = random_num(z_class);
    for (int k = 0; k < 6; k++)
    {
        if (seatingchart[k] == checkavail)
        {
            checkavail = random_num(z_class);
            k=-1;
        }
    }
    seatingchart[booked] = checkavail;
    booked++;
    

    return checkavail;
    
}

// takes as input the class of seat requested and outputs a random seat number not yet booked in the class
void print_boarding_pass(int class)
{
    switch (class)
    {
        case 1:
            printf("Your assigned first class seat %d\n", search_seat(class));
            break;
            
        case 2:
            printf("Your assigned economy seat %d\n", search_seat(class));
            break;
    }
}
