/* QUESTÃO 15 — Soma até o Zero
Leia números com um while até o usuário digitar 0 e mostre a soma dos números digitados. Soma: 16

FOCO DA QUESTÃO:
- O zero encerra a leitura e não entra na soma; leia novamente dentro do while.
*/

#include <stdio.h>

int numero;
int soma = 0;

int main(){
printf("Digite um numero: ");
scanf("%d", &numero); // Lê os dados informados pelo usuário.

while(numero != 0){ // O zero encerra a entrada de números.
soma = soma + numero;

printf("Digite um numero: ");
scanf("%d", &numero); // Lê os dados informados pelo usuário.
}
printf("Soma: %d", soma);
}
