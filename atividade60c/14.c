/* QUESTÃO 14 — Quantidade de Dígitos
Leia um número inteiro positivo e, usando um while, conte quantos dígitos ele tem. Digitos: 5

FOCO DA QUESTÃO:
- Divida o número por 10 repetidamente e conte quantas divisões são necessárias.
*/

#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite um número inteiro positivo: \n");
    scanf("%d", &numero); 

    while(numero > 0){ // Enquanto o número for maior que 0.
        numero /= 10; // Divide o número por 10.
        contador++; // Incrementa o contador de dígitos.
    }

    printf("dígitos: %d", contador);
}