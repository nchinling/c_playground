#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    // the address of the array is the same as the address of first element
    // * is creation of pointer to store memory address
    int *ptr = myNumbers;
    // int *ptr = &myNumbers[0];

    int i;

    for (i = 0; i < 4; i++)
    {
        // * is derefencing operator
        printf("%d\n", *(ptr + i));
    }
}