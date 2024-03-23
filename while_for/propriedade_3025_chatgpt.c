#include <stdio.h>
#include <stdbool.h>

// Função que verifica se um número de 4 dígitos possui a característica desejada
bool possui_caracteristica(int numero) {
  // Se o número não for de 4 dígitos, retorna falso
  if (numero < 1000 || numero > 9999) {
    return false;
  }
  // Separa os dois primeiros dígitos e os dois últimos dígitos do número
  int primeiro = numero / 100;
  int segundo = numero % 100;
  // Calcula a soma dos dois pares de dígitos e o seu quadrado
  int soma = primeiro + segundo;
  int quadrado = soma * soma;
  // Verifica se o quadrado é igual ao número original
  return quadrado == numero;
}

int main() {
  int valor; // Variável para armazenar o valor lido
  printf("Digite um valor entre 1000 e 9999 (ou outro valor para sair):\n");
  scanf("%d", &valor); // Lê o valor digitado pelo usuário
  while (valor >= 1000 && valor <= 9999) { // Enquanto o valor for válido
    if (possui_caracteristica(valor)) { // Se o valor possuir a característica
      printf("O valor %d possui a característica.\n", valor);
    } else { // Se o valor não possuir a característica
      printf("O valor %d não possui a característica.\n", valor);
    }
    printf("Digite outro valor entre 1000 e 9999 (ou outro valor para sair):\n");
    scanf("%d", &valor); // Lê outro valor digitado pelo usuário
  }
  printf("Programa encerrado.\n");
  return 0;
}

