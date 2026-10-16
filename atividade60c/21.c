/* QUESTÃO 21 — Vetor ao Contrário
Leia n e depois n números para um vetor. Imprima o vetor do último para o primeiro. 5 4 3 2 1

FOCO DA QUESTÃO:
- Para inverter a exibição, percorra o vetor começando no índice n - 1 até zero.
*/

#include <stdio.h>

int n;
int vetor[100];
int i;

int main(){
printf("Digite o tamanho do vetor: ");
scanf("%d", &n); // Lê os dados informados pelo usuário.

for(i = 0; i < n; i++){ // Percorre os dados para processar cada elemento.
printf("Digite o %d numero: ", i + 1);
scanf("%d", &vetor[i]); // Lê os dados informados pelo usuário.
}

for(i = n - 1; i >= 0; i--){ // Percorre os dados para processar cada elemento.
printf("%d ", vetor[i]);
}
}
