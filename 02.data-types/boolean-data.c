#include <stdio.h>
#include <stdbool.h>

int main()
{
    // short is_logged_in = 1;
    bool is_logged_in = true;

    if (is_logged_in)
    {
        printf("User logged In\n");
    }
    else
    {
        printf("User Logged Out\n");
    }

    return 0;
}