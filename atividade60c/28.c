/* QUESTÃO 28 — Incremento por Ponteiro
Crie a função void incrementa(int *x) que soma 1 ao valor original. Na main, leia um número, chame a função 3 vezes e imprima o resultado. Resultado: 8

FOCO DA QUESTÃO:
- int *x recebe um endereço; (*x)++ altera o valor guardado nesse endereço.
*/

#include <stdio.h>

void incrementa(int *x){
    (*x)++; // Incrementa o conteúdo do endereço recebido.
}

int main() {
int soma;
    printf("Digite um numero:\n");
    scanf("%d", &soma); // Lê os dados informados pelo usuário.
    for(int i = 0; i < 3; i++) { // Percorre os dados para processar cada elemento.
        incrementa(&soma);
    }
    printf("Valor incrementado: %d\n", soma);
}
