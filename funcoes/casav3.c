#include <stdio.h>

#define q '#'

void casa()
{
    printf("%c%c%c%c\n", q, q, q, q);
    printf("%c%c%c%c\n", q, q, q, q);
    printf("%c%c%c%c%c%c\n", q, q, q, q, q, q);
    printf("%c%c%c%c%c%c\n", q, q, q, q, q, q);
    printf("%c%c%c%c\n", q, q, q, q);
    printf("%c%c%c%c\n", q, q, q, q);
    printf("\n");
}

int main()
{
    casa();
    return 0;
}