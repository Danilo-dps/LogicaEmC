#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int a, b = 1;
    scanf("%d", &a);
    while (a > 1)
    {
        b *= a;
        a--;
    }
    printf("Fatorial %d\n", b);
    return 0;
}
