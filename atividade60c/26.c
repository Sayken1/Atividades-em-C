/* QUESTÃO 26 — Valor Absoluto
Crie a função int absoluto(int x) que retorna o valor sem sinal (sem usar funções prontas). Absoluto: 7

FOCO DA QUESTÃO:
- Se x for negativo, retorne -x; caso contrário, o valor absoluto é o próprio x.
*/

#include <stdio.h>

int absoluto(int x){
if(x < 0){ // Verifica se a condição é verdadeira.
return -x; // Troca o sinal para devolver o valor positivo.
}
return x;
}

int num;

int main() {
printf("Digite um numero:\n");
scanf("%d", &num); // Lê os dados informados pelo usuário.

printf("Absoluto: %d\n", absoluto(num));
}
