#include <stdio.h>

// int main()
// {
//     // Char - %c
//     char a = 'a';
//     printf("Char - %c\n", a);

//     return 0;
// }

// In C everything is integer behind the scene. If I assign the ASCII value of a character to a variable, then try to print it with a format specifier for characters, it will print out the character instead of integer value. Same would happen for character as value and %d as format specifier.

int main()
{
    // Char - %c
    char a = 'a';
    char b = 67;
    printf("Char - %d\n", a);
    printf("Char - %c\n", b);

    return 0;
}