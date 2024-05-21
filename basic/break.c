#include <stdio.h>

int main()
{
    int target = 5;

    for (int i = 1; i <= 10; i++)
    {
        printf("Current value: %i\n", i);

        if (i == target)
        {
            printf("Target value reached. Exiting loop.\n");
            break; // Exit the loop
        }
    }
}