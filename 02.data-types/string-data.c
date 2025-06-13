#include <stdio.h>

int main()
{
    char name[20];

    name[0] = 'N';
    name[1] = 'A';
    name[2] = 'Z';
    name[3] = 'M';
    name[4] = 'U';
    name[5] = 'L';
    name[6] = '\0';
    printf("%s\n", name);

    char name1[30] = "Nazmul Hussain";
    printf("%s\n", name1);

    char name2[30] = {'H', 'A', 'L', 'A', 'R', ' ', 'P', 'O', ' ', 'H', 'A', 'L', 'A'};
    printf("%s\n", name2);

    char user_name[30];
    printf("What is your name?\n");
    scanf("%29s", user_name);
    printf("Hello, %s\n", user_name);

    return 0;
}