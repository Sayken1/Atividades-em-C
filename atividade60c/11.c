/* QUESTÃO 11 — Soma dos Ímpares
Leia n e, usando um for, some apenas os números ímpares de 1 até n. Soma dos impares: 25

FOCO DA QUESTÃO:
- O for avança de dois em dois para visitar somente ímpares; soma acumula os valores.
*/

#include <stdio.h>

int num;
int soma =0;   

int main(){

printf("Digite um numero para somar todos os impares: \n");
scanf("%d", &num); // Lê os dados informados pelo usuário.

for(int i = 1; i <= num; i += 2){ // Avança de dois em dois para visitar apenas ímpares.
    soma += i;
}
printf("Soma dos impares: %d", soma);
}
