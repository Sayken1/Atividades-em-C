/* QUESTÃO 24 — Contando Pares com Função
Crie a função int eh_par(int n). Na main, leia 5 números e use a função para contar quantos são pares. Pares: 3

FOCO DA QUESTÃO:
- A função retorna 1 para par e 0 para ímpar; a main conta os retornos positivos.
*/

#include <stdio.h>
int eh_par(int n){
if(n % 2 == 0){ // Verifica se a condição é verdadeira.
return 1; // Retorna verdadeiro: o número é par.
}
else{ // Executa quando as condições anteriores falham.
return 0;
}
}
int num[5];
int contador = 0;
int main(){  
printf("Digite 5 numeros:\n");
for(int i = 0; i < 5; i++){ // Percorre os dados para processar cada elemento.
scanf("%d", &num[i]); // Lê os dados informados pelo usuário.

if(eh_par(num[i]) == 1){ // Verifica se a condição é verdadeira.
contador++;
}
}
printf("Quantidade de pares: %d\n", contador);
}
