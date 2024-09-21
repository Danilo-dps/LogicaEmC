#include <stdio.h>

int main() {
    int x, fatorial = 1;

    printf("Entre com um número inteiro para fazer o fatorial: ");
    scanf("%d", &x);

    for(int i = 1; i <= x; i++) {
        fatorial *= i;
    }

    printf("%d\n", fatorial);
    return 0;
}
