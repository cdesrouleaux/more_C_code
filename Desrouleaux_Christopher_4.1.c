/*
COP3223 Spring 2023 Assignment 4.1
Copyright 2023 Desrouleaux Christopher
*/
// Purpose - to search for students by first name, last name, or #id and outputs their info.

#include <stdio.h>
#include <string.h>
#define SIZE 6

// struct initalization
struct student
{
    char first[20];
    char last[20];
    int id;
    char grade;
};


int main()
{
    // variable declaration
    char fn[20], ln[20];
    int stu_id, search;
    
    
    // inatialize struct array elements
    struct student s1 = {"John", "Johnson", 895645, 'A'};
    struct student s2 = {"Jake", "Michaelson", 236598, 'A'};
    struct student s3 = {"Sally", "Weber", 225584, 'C'};
    struct student s4 = {"Tou", "Xiong", 364875, 'B'};
    struct student s5 = {"Jacquelyn", "Jackson", 984587, 'D'};
    struct student s6 = {"John", "White", 560258, 'C'};
    
    //initalize struct array
    struct student stu[SIZE] = {s1, s2, s3, s4, s5, s6};
    
    
    // search for student by first name, last name, or id
    printf("Would you like to search students by (1) first name, (2) last name, or (3) id\n" "Enter the corresponding number: ");
    scanf("%d", &search);
    
    // searches for and outputs student info based on choice of input type 1,2, or 3
    switch (search)
    {
        // searches through character array for a matching first name and prints member arrays element info
        case 1:
            printf("Enter first name: ");
            scanf("%s", fn);

            for (int i = 0; i < SIZE; i++)
            {
                if (strcmp(stu[i].first, fn) == 0)
                    printf("Found the record for %s %s, id %d, grade %c\n", stu[i].first, stu[i].last, stu[i].id, stu[i].grade);
            }
            
            break;
            
        // searches through character array for a matching last name and prints member arrays element info
        case 2:
            printf("Enter last name: ");
            scanf("%s", ln);
            

            for (int i = 0; i < SIZE; i++)
            {
                if (strcmp(stu[i].last, ln) == 0)
                    printf("Found the record for %s %s, id %d, grade %c\n", stu[i].first, stu[i].last, stu[i].id, stu[i].grade);
            }

            break;
            
        // searches through character array for a matching #id and prints member arrays element info
        case 3:
            printf("Enter student id #: ");
            scanf("%d", &stu_id);
            
            for (int i = 0; i < SIZE; i++)
            {
                if (stu[i].id == stu_id)
                    printf("Found the record for %s %s, id %d, grade %c\n", stu[i].first, stu[i].last, stu[i].id, stu[i].grade);
            }

            break;
    }
    
    
    
    
    return 0;
}
