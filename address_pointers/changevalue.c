#include <stdio.h>

int main()
{
    int myNumbers[4] = {25, 50, 75, 100};

    // Change the value of the first element to 13
    *myNumbers = 13;

    // Change the value of the second element to 17
    *(myNumbers + 1) = 17;

    // Print all elements in the array
    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", *(myNumbers + i));
    }

    return 0;
}