#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Demonstration that a pointer to four bytes can be interpreted as one int value (4 bytes) or as an array of 4 char values (1 byte each).
    int *ptr1 = malloc(4);
    char *ptr2 = (char *)ptr1;
    ptr1[0] = 1684234849;

    printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
    // output: 1684234849 is a b c d
    printf("%d is %c %c %c %c\n", *ptr1, ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
    // output: 1684234849 is a b c d

    return 0;
}