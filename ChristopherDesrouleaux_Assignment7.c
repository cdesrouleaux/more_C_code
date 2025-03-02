/*
Lecture 14: Arrays as Function Parameters
Date: 10/22/2021
Author: Christopher Desrouleaux
*/

#include <stdio.h>
#define SIZE1 5
#define SIZE2 9
#define SIZE3 3

// prototyping functions
void fill_array(int list[], int n, int in_value);
int get_max(const int list[], int n);
void add_arrays(const double ar1[], const double ar2[], double arsum[], int n);


int main()
{
    int maxNum;
    int xon [SIZE1], geo [SIZE2] = {1,5,9,52,77,66}; // geo - list of numbers for function to pick out the maximum value
    double ar1 [3] = {1,2,3}, ar2 [3] = {5,6,7}; // these are the nums that the function will add together
    double nAR [SIZE3];
    
    fill_array(xon, 5, 2); // initalizes all 5 slots as 2
    maxNum = get_max(geo, 9); // function picks the max value out of the list
    add_arrays(ar1, ar2, nAR, 3); // adds 2 arrays together and outputs the value in the form of an array
    
    //print array elements
    printf("Function fill_array: \n");
    for (int i = 0; i < SIZE1 ; i++)
        printf("%d\n", xon[i]);
    
    printf("Function get_max: \n");
    printf("%d\n", maxNum);
    
    printf("Function add_arrays: \n");
    for (int i = 0; i < SIZE3; i++)
        printf("%.1f\n", nAR[i]);
 
    return 0;
}
//function definition comes after the main function

/*
fills any array to an input value set by in_value parameter
Pre: array list, size of array, input value
*/
void fill_array(int list[], int n, int in_value)
{
    int i;
    for (i = 0; i< n ; i++)
        list[i] = in_value;
}
/* function returns largest of the first n values in array list*/
int get_max(const int list[], int n)
{
    int i, cur_large;
    cur_large = list[0];
    for (i = 1; i < n; ++i)
        if (list[i] > cur_large)
            cur_large = list[i];
    
    return(cur_large);
}
/* Adds corresponding elements of arrays ar1 and ar2, storing the result in arsum */
void add_arrays(const double ar1[], const double ar2[], double arsum[], int n)
{
    int i;
    for (i = 0; i < n ; ++i)
        arsum[i] = ar1[i] + ar2[i];
}
