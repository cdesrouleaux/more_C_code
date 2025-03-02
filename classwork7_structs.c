//
//  classwork7.c
//  Class Work 7
//
//  Created by Christopher Desrouleaux on 4/18/23.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

// initalizes struct and renames it using typedef
typedef struct employees
{
    char *first;
    char *last;
    int age;
    int salary;
    int zip;
}ee;

int main()
{
    // Part 1 - created a database for white house employees and printed output using dot and arrow operator
    printf("_PART 1_\n");
    
    // inatilize struct variables
    ee e1 = {"Hillary", "Clinton", 71, 186000, 37188};
    ee e2 = {"Barack", "Obama", 68, 320000, 37188};
    ee e3 = {"Robert", "Gates", 76, 110500, 37188 };
    
    // outputs struct members using dot operator
    printf("-dot operator-\n");
    printf("%s %s age %d salary %d zip code %d\n", e1.first, e1.last, e1.age, e1.salary, e1.zip);
    printf("%s %s age %d salary %d zip code %d\n", e2.first, e2.last, e2.age, e2.salary, e2.zip);
    printf("%s %s age %d salary %d zip code %d\n\n", e3.first, e3.last, e3.age, e3.salary, e3.zip);
    
    // hands over address of struct variables to new struct pointers
    ee *ptr1 = &e1;
    ee *ptr2 = &e2;
    ee *ptr3 = &e3;
    
    // outputs struct members using arrow operator
    printf("-arrow operator-\n");
    printf("%s %s age %d salary %d zip code %d\n", ptr1->first, ptr1->last, ptr1->age, ptr1->salary, ptr1->zip);
    printf("%s %s age %d salary %d zip code %d\n", ptr2->first, ptr2->last, ptr2->age, ptr2->salary, ptr2->zip);
    printf("%s %s age %d salary %d zip code %d\n\n", ptr3->first, ptr3->last, ptr3->age, ptr3->salary, ptr3->zip);

    // Part 2
    printf("_PART 2_\n");
    // initalizes a and b
    int a = 10;
    int b = 20;
    
    // outputs bitwise operators
    printf("AND = %d\n", a & b);
    printf("OR = %d\n", a | b);
    printf("XOR = %d\n", a ^ b);
    printf("Complement A = %d\n", ~a);
    printf("Complement B = %d\n", ~b);
    printf("Right Shift A = %d\n", a >> 2);
    printf("Right Shift B = %d\n", b >> 2);
    printf("Left Shift A = %d\n", a << 2);
    printf("Left Shift B = %d\n", b << 2);
    
    
    // Part 3
    printf("\n_PART 3_\n");
    // inatilize enumeration with members Mon-Fri
    enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

    // checks at which element Wed is
    enum week day;
    day = Wed;
    printf("Day %d of the week\n", day+1); // user friendly output
    //                  /
    // answer.......2 \/


    return 0;
}
