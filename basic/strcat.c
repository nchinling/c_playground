#include <stdio.h>
#include <string.h>

int main(void)
{

    char greeting[50] = "Hello, ";

    char name[] = "Chin Ling";

    strcat(greeting, name);

    printf("Message: %s\n", greeting);
}