/* QUESTÃO 23 — Está no Vetor?
Leia 5 números para um vetor e depois um valor. Diga se o valor está ou não no vetor. 16 esta no vetor

FOCO DA QUESTÃO:
- A variável encontrou funciona como sinalizador: 1 significa que o valor foi localizado.
*/

#include <stdio.h>

int vetor[5];
int valor;
int i;
int encontrou = 0;

int main(){
printf("Digite 5 numeros:\n");

for(i = 0; i < 5; i++){ // Percorre os dados para processar cada elemento.
scanf("%d", &vetor[i]);
}

printf("Digite um valor: ");
scanf("%d", &valor); // Lê os dados informados pelo usuário.

for(i = 0; i < 5; i++){ // Percorre os dados para processar cada elemento.
if(vetor[i] == valor){ // Verifica se a condição é verdadeira.
encontrou = 1; // Registra que o valor foi localizado.
}
}

if(encontrou == 1){ // Verifica se a condição é verdadeira.
printf("%d esta no vetor", valor);
}
else{ // Executa quando as condições anteriores falham.
printf("%d nao esta no vetor", valor);
}
}