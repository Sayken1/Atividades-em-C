/* QUESTÃO 16 — Maior da Sequência
Leia números positivos até o usuário digitar 0 e mostre o maior deles, sem usar vetor. Maior: 9

FOCO DA QUESTÃO:
- Atualize o maior somente quando o número atual for maior; zero encerra a sequência.
*/

#include <stdio.h>

int numero;
int maior = 0;

int main(){
printf("Digite um numero: ");
scanf("%d", &numero); // Lê os dados informados pelo usuário.

while(numero != 0){ // Repete enquanto a condição for verdadeira.
if(numero > maior){ // Atualiza o maior somente quando encontra um valor superior.
maior = numero;
}

printf("Digite um numero: ");
scanf("%d", &numero); // Lê os dados informados pelo usuário.
}

printf("Maior: %d", maior);
}
