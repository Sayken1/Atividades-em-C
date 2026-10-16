/* QUESTÃO 20 — Contando Negativos
Leia 8 números para um vetor e conte quantos são negativos. Negativos: 3

FOCO DA QUESTÃO:
- contador aumenta somente quando o valor lido é negativo.
*/

#include <stdio.h>

int contador = 0;
int v[8];


int main() {
    printf("Digite 8 numeros\n");
for (int i = 0; i < 8; i++) { // Percorre os dados para processar cada elemento.
    printf("Numero %d: ", i + 1);
    scanf("%d", &v[i]); // Lê os dados informados pelo usuário.
if (v[i] < 0) { // Conta apenas valores menores que zero.
    contador++;
}
}
printf("Negativos: %d", contador);
}