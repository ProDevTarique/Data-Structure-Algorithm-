//This line includes the standard input-output library, allowing the use of functions like printf.
#include<stdio.h>

//This is the entry point of the program.
int main()
{
   // arr[15]: Declares an integer array arr that can hold 15 elements.
    int arr[15];
    
    /*
    i: Loop counter.
    n=10: Initializes n to 10, which will track the number of initialized elements in arr.
    */
    int i, n=10;

    //This loop fills the first 10 elements of arr with the values 1 through 10.
    for(i=0; i<10; i++)
    arr[i]=i+1;

    //This loop prints the first n elements (1 to 10), followed by a newline.
    for(i=0; i<n; i++)
    printf("%d", arr[i]);
    printf("\n");

    
    //Here, n is incremented by 1, making it 11. The code then assigns the value 11 to the 11th position of the array (arr[10]).
    n++;
    arr[n-1] = 11;

    //This loop prints the array again, now showing the elements from index 0 to 10, which will be 1 through 11.
    for (i=0; i<n; i++)
    printf("%d", arr[i]);
    printf("\n");

    return  0;
}