/* QUESTÃO 5 — Três em Ordem
Leia três números inteiros e imprima-os em ordem crescente, usando apenas condicionais. 2 5 7

FOCO DA QUESTÃO:
- As condições cobrem as seis possíveis ordens dos três números.
*/

#include <stdio.h>

int num1;
int num2;
int num3;

int main(){
    scanf("%d %d %d", &num1, &num2, &num3); // Lê os dados informados pelo usuário.

    if (num1 <= num2 && num2 <= num3) { // Verifica se a condição é verdadeira.
        printf("%d %d %d\n", num1, num2, num3);
    } else if (num1 <= num3 && num3 <= num2) { // Verifica se a condição é verdadeira.
        printf("%d %d %d\n", num1, num3, num2);
    } else if (num2 <= num1 && num1 <= num3) { // Verifica se a condição é verdadeira.
        printf("%d %d %d\n", num2, num1, num3);
    } else if (num2 <= num3 && num3 <= num1) { // Verifica se a condição é verdadeira.
        printf("%d %d %d\n", num2, num3, num1);
    } else if (num3 <= num1 && num1 <= num2) { // Verifica se a condição é verdadeira.
        printf("%d %d %d\n", num3, num1, num2);
    } else { // Executa quando as condições anteriores falham.
        printf("%d %d %d\n", num3, num2, num1);
    }
}
