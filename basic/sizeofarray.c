#include <stdio.h>

int main()
{

    // 2 bytes each; total 10 bytes
    // short int grades[] = {50, 75, 100, 67, 90};

    // 4 bytes each; total 20 bytes
    int grades[] = {50, 75, 100, 67, 90};

    // calculate the size of the array
    int array_size = sizeof(grades);

    // calculate the size of the first element in array
    int element_size = sizeof(grades[0]);

    printf("Size of array: %i bytes\n", array_size);
    printf("Size of first element: %i bytes\n", element_size);
}