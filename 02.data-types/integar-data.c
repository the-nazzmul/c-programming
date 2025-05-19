#include <stdio.h>

int main()
{
    // Signed integer data

    printf("Signed Integers\n");

    // Short - %d, %hi
    short a = 45;
    printf("I am short - %hi\n", a);

    // Int - %d, %i
    int b = 1000;
    printf("I am int - %d\n", b);

    // Long - %ld, %li
    long c = 1200l;
    printf("I am long - %ld\n", c);

    // Long Long - %lld, %lli
    long long d = 32142ll;
    printf("I am long long - %lld\n", d);

    // Octal Int - %o
    int o = 0777;
    printf("I am octal: Decimal = %d, Octal = %o\n", o, o);

    // Hexadecimal Int - %x, %X
    int h = 0Xfff;
    printf("I am hexadecimal: Decimal = %d, Hexadecimal = %X\n", h, h);

    // Unsigned Intergers
    printf("Unsigned Integers\n");

    // Unsigned short - %hu
    unsigned short us = 41;
    printf("Unsigned short - %hu\n", us);

    // Unsigned int - %u
    unsigned int ui = 4435;
    printf("Unsigned int - %u\n", ui);

    // Unsigned long = %lu
    unsigned long ul = 34345;
    printf("Unsigned long - %lu\n", ul);

    // Unsigned long long = %llu
    unsigned long long ull = 3434543153;
    printf("Unsigned long long - %llu\n", ull);

    return 0;
}