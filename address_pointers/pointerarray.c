#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    // Get the memory address of the myNumbers array
    printf("%p\n", myNumbers);

    // Get the memory address of the first array element
    printf("%p\n", &myNumbers[0]);

    // Work with arrays through pointers.
    int myNumbers2[4] = {25, 50, 75, 100};

    // Get the value of the first element in myNumbers
    printf("%d\n", *myNumbers2);

    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers2 + 1));

    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers2 + 2));

    // Get the value of the fourth element in myNumbers
    printf("%d\n", *(myNumbers2 + 3));
}