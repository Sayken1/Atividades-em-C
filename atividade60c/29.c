/*
QUESTÃO 29 — Tamanho da Palavra

Leia uma palavra e conte quantas letras ela tem,
percorrendo o vetor até o '\0'. Tamanho: 10

FOCO DA QUESTÃO:
- O laço termina ao encontrar '\0', o marcador de fim da string em C.
*/

#include <stdio.h>

int main() {
    char palavra[100];
    int contador = 0;

    printf("Digite uma palavra:\n");
    scanf("%s", palavra); // Lê a palavra digitada pelo usuário.

    // Percorre a string até encontrar o caractere '\0', que indica seu fim.
    for (int i = 0; palavra[i] != '\0'; i++) {
        contador++; // Conta uma letra a cada repetição do laço.
    }

    printf("Tamanho da palavra: %d", contador); 
}