#include <stdio.h>
#include <string.h>

int main()
{

    char original[] = "Cool dude";

    char destination[20]; // A big enough array

    strcpy(destination, original);

    printf("Copied string: %s\n", destination);
}