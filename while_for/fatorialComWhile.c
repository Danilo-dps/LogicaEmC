#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main()
{
    double a;
    double b = 1;
    scanf("%lf", &a);
    while (a >= 0 && a < 13)
    {
        if (a == 0)
        {
            printf("%.0f\n", b);
            break;
        }
        else
        {
            while (a > 1 && a < 13)
            {
                b *= a;
                a--;
            }
            printf("%.0f\n", b);
            scanf("%lf", &a);
            b = 1;
        }
    }
    return 0;
}

