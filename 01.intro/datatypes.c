#include <stdio.h>

int main()
{
    int num = 45;
    float num2 = 45.45f;
    char ch = 'T';

    printf("%d\n", num);
    printf("%f\n", num2);
    printf("%c\n", ch);

    num = num2;
    printf("%d\n", num); // even though num2 is a float, but when it was assigned to num, it turned into an int because "num" was originally int. That's why the numbers after the decimal was not printed

    return 0;
}

// number: int, float
// text: character -> 'a', 'A', '%' (we need to use '' for characters)
// boolean: Actually there is no boolean type in C. Actually it is int
// custom type