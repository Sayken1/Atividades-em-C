/* QUESTÃO 19 — Pares e Ímpares do Vetor
Leia 6 números para um vetor e mostre a soma dos pares e a soma dos ímpares. Soma dos pares: 12 Soma dos impares: 9

FOCO DA QUESTÃO:
- O primeiro for preenche o vetor; o segundo separa valores pares e ímpares pelo resto da divisão por 2.
*/

#include <stdio.h>

int vetor[6];
int somaPares = 0;
int somaImpares = 0;
int i;

int main(){

for(i = 0; i < 6; i++){ // Percorre os dados para processar cada elemento.
printf("Digite um numero: \n");
scanf("%d", &vetor[i]); // Lê os dados informados pelo usuário.
}

for(i = 0; i < 6; i++){ // Percorre os dados para processar cada elemento.
if(vetor[i] % 2 == 0){ // Resto zero indica que o número é par.
somaPares = somaPares + vetor[i];
}
else{ // Executa quando as condições anteriores falham.
somaImpares = somaImpares + vetor[i];
}
}
printf("Soma dos pares: %d\n", somaPares);
printf("Soma dos impares: %d", somaImpares);
}
