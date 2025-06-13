#include <stdio.h>

int main()
{
    char ch = 'T';
    int r = (int)ch + 200;
    printf("%c %d %x\n", ch, ch, ch);
    printf("Result: %d\n", r);

    float a = 4.3f;
    float b = 6.2f;
    float c = 8.5f;

    int result = a + b + c;
    printf("No Conversion: %d\n", result);

    int result1 = (int)a + (int)b + (int)c;
    printf("Conversion: %d\n", result1);

    return 0;
}