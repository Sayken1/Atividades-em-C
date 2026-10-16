/* QUESTÃO 1 — Quociente e Resto
Leia dois inteiros e imprima o quociente e o resto da divisão do primeiro pelo segundo. Quociente: 3 Resto: 2

FOCO DA QUESTÃO:
- Divisão inteira usa / para o quociente e % para o resto; o divisor não pode ser zero.
*/

#include <stdio.h>

char v[]= {'A','B'};
int inteiro[2];
int resto;
int quociente;

int main(){
for (int i = 0; i < 2; i++){ // Lê os dois operandos usando o mesmo laço.
printf("Digite o numero de %c: \n", v[i]);
scanf("%d", &inteiro[i]); // Lê os dados informados pelo usuário.
}
quociente = inteiro[0] / inteiro[1]; // / calcula o quociente inteiro da divisão.
printf("quociente: %d \n", quociente);
resto = inteiro[0] % inteiro[1]; // % obtém o resto da divisão.
printf("resto: %d \n", resto);
}
