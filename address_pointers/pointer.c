#include <stdio.h>

int main()
{
    int myAge = 43;    // An int variable
    int *ptr = &myAge; // A pointer variable, with the name ptr, that stores the address of myAge

    // Output the value of myAge (43)
    printf("The age is: %d\n", myAge);

    // Output the memory address of myAge (0x7ffe5367e044)
    printf("The memory address is: %p\n", &myAge);

    // Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("The pointer is: %p\n", ptr);

    // print value of myAge using dereferencing operator.
    printf("The value of myAge is: %i\n", *ptr);
}