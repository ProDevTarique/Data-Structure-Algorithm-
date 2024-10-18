//This line includes the standard input/output library in C, allowing the use of functions like printf() for output.
#include<stdio.h>

//This marks the beginning of the main function, which is the entry point of every C program.
int main()
{
    //Here, an array named arr is declared with a maximum size of 15 integers. However, only the first 10 elements will be used in this program.
    int arr[15];

    /*
    Several integer variables are declared:
-> i is used as a loop counter.
-> n is initialized to 10, indicating the number of elements to work with.
    */
    int i, n=10;

/*
This for loop iterates from 0 to 9 (10 iterations total). During each iteration:
The element at index i of the array arr is assigned the value i + 1.
So, after this loop, arr will contain the values: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10.
*/
    for(i=0; i<10; i++)
    arr[i]=i+1;

/*
This for loop also iterates from 0 to n - 1 (which is 9 in this case):
It prints each element of the arr array.
The %d format specifier is used to print integers.
The output will be 12345678910 (all numbers printed in a single line).
*/
    for(i=0; i<n; i++) 
    printf("%d", arr[i]);

    //After printing all the elements, this line outputs a newline character, ensuring that any further output will appear on a new line.
    printf("\n");

    //This line indicates that the program finished successfully by returning 0 to the operating system.
    return 0;
}