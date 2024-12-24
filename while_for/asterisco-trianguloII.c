#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, j, n, m;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            printf("*");
        }
        printf("\n");     
    }

    for (i = (n - 1) ; i > 0; i--) {
        for (j = i; j > 0; j--) {
            printf("*");
        }
        printf("\n");     
    }

    return 0;
}
