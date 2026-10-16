/* QUESTÃO 22 — Média e Maior do Vetor
Leia n números para um vetor e mostre a média e o maior valor. Media: 13.200000 Maior: 23

FOCO DA QUESTÃO:
- Some durante a leitura; inicialize maior com o primeiro elemento e converta para float ao calcular a média.
*/

#include <stdio.h>

int n;
int vetor[100];
int i;
int soma = 0;
int maior;
float media;

int main(){
printf("Digite o tamanho do vetor: ");
scanf("%d", &n); // Lê os dados informados pelo usuário.

printf("Digite os numeros do vetor: \n");
for(i = 0; i < n; i++){ // Percorre os dados para processar cada elemento.
scanf("%d", &vetor[i]); // Lê os dados informados pelo usuário.
soma = soma + vetor[i];
}

maior = vetor[0];

for(i = 1; i < n; i++){ // Percorre os dados para processar cada elemento.
if(vetor[i] > maior){ // Verifica se a condição é verdadeira.
maior = vetor[i];
}
}

media = (float)soma / n; // O cast evita divisão inteira.

printf("Media: %f\n", media);
printf("Maior: %d", maior);
}
