#include <stdio.h>

// Create a structure called myStructure
struct myStructure
{
    int myNum;
    char myLetter;
};

int main()
{
    // Create a structure variable of myStructure called s1
    struct myStructure s1;
    struct myStructure s2;

    // Assign values to members of s1
    s1.myNum = 13;
    s1.myLetter = 'B';
    s2.myNum = 40;
    s2.myLetter = 'C';

    // Print values
    printf("s1 number: %d\n", s1.myNum);
    printf("s1 letter: %c\n", s1.myLetter);

    printf("s2 number: %d\n", s2.myNum);
    printf("s2 letter: %c\n", s2.myLetter);

    return 0;
}