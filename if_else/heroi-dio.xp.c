#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome[50];
    int xp;
    char* nivel;

    // Solicita a entrada do nome e da quantidade de experiência (XP) do herói
    printf("Digite o nome do herói: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite a quantidade de XP do herói: ");
    scanf("%d", &xp);

    // Remove o caractere de nova linha do nome, se presente
    nome[strcspn(nome, "\n")] = 0;

    // Estrutura de decisão para determinar o nível do herói com base na XP
    if (xp < 1000) {
        nivel = "Ferro";
    } else if (xp >= 1001 && xp <= 2000) {
        nivel = "Bronze";
    } else if (xp >= 2001 && xp <= 5000) {
        nivel = "Prata";
    } else if (xp >= 5001 && xp <= 7000) {
        nivel = "Ouro";
    } else if (xp >= 7001 && xp <= 8000) {
        nivel = "Platina";
    } else if (xp >= 8001 && xp <= 9000) {
        nivel = "Ascendente";
    } else if (xp >= 9001 && xp <= 10000) {
        nivel = "Imortal";
    } else if (xp >= 10001) {
        nivel = "Radiante";
    }

    // Saída da mensagem com o nome e o nível do herói
    printf("O Herói de nome %s está no nível de %s\n", nome, nivel);

    return 0;
}
