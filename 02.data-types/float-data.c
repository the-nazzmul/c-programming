#include <stdio.h>

int main()
{
    // Float specifier - %f
    float f = 489.123F;
    printf("Float - %f\n", f);

    // Double - %lf
    double d = 34254325.432;
    printf("Double - %lf\n", d);

    // Long Double - %Lf
    long double ld = 4315154524243.431;
    printf("Long Double - %Lf\n", ld);

    return 0;
}