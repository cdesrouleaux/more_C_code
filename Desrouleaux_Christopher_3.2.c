/*
COP3223 Spring 2023 3_2
Copyright 2023 Desrouleaux_Christopher
*/
//
// Purpose - Practice creating, inatilizing, and printing dynamic arrays as well as utilizing pointers
//

#include <stdio.h>
#include <stdlib.h>

void init_array(int);
void search_array(int *, int);

int main()
{
    int s;
    
    printf("Enter the size of the array: ");
    scanf("%d", &s);
    
    init_array(s);
    
    
    
    return 0;
}

// initalizes a dynamic array
void init_array(int size)
{
    int *ptr, i;
    
    //allocates x number blocks for future use and returns (datatype*) void* address/ base address
    ptr = (int*) calloc(size, sizeof(int));
    
    for (i = 0; i < size; i++)
    {
        printf("Please enter the array element: ");
        scanf("%d", ptr+i);
    }
    
    printf("Elements are: ");
    for (i = 0; i < size; i++)
        printf("%d  ", *(ptr+i));

    
    search_array(ptr, size);// passes the base address of ptr and the size
   
}


// searches the array for a number that matchers
void search_array(int *ptr, int size)
{
    int check, p_holder, j;
    
    printf("\nEnter the number you want to check for: ");
    scanf("%d", &check);
    
    for (j = 0; j < size; j++)
    {
        p_holder = *(ptr+j);//the value at the address being pointed to ex. *(2000) = 1, *(2004) = 4, *(2008) = 7
        if (check == p_holder)
            printf("Found number %d in array[%d]\n", check, j);
    }
    
   

}
