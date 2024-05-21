#include <stdio.h>
#include <string.h>

int main()
{

    // returns 0
    // char word1[] = "apples";
    // char word2[] = "apples";

    // returns -1 (first word comes before second word)
    // char word1[] = "apples";
    // char word2[] = "bananas";

    // returns 1 (first word comes after second word)
    char word1[] = "bananas";
    char word2[] = "apples";

    int result = strcmp(word1, word2);

    printf("Result: %i\n", result);
}