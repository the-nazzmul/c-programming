#include <stdio.h>

int main()
{
    int a, b;
    float c, d;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("%d + %d = %d\n", a, b, a + b);

    printf("Enter first float: ");
    scanf("%f", &c);

    printf("Enter second float: ");
    scanf("%f", &d);

    printf("%f + %f = %f\n", c, d, c + d);
    // char a, b, c;

    // scanf(" %c", &a);
    // scanf(" %c", &b);
    // scanf(" %c", &c);

    // printf("%c + %c + %c = %d\n", a, b, c, a + b + c);

    return 0;
}