#include <stdio.h>

int main()
{

    int grades[] = {50, 75, 100, 67, 90};

    for (int i = 0; i < 5; i++)
    {
        printf("Element at index %i: %i\n", i, grades[i]);
    }
}