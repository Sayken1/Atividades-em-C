/* QUESTÃO 31 — Primos até N
Crie a função int eh_primo(int n) e use-a para imprimir todos os primos de 2 até n. 2 3 5 7 11 13 17 19

FOCO DA QUESTÃO:
- Teste divisores na função eh_primo e use o retorno para decidir o que imprimir.
*/

#include <stdio.h>

int eh_primo(int n) {
    for(int i = 2; i < n; i++) {
        if (n % i == 0) {
            return 0; // Não é primo
        }
    }
    return 1; // É primo
}

int main() {
    int num;

    printf("Digite um numero:\n");
    scanf("%d", &num);
    for (int i = 2; i <= num; i++){
        if (eh_primo(i)) {
            printf("%d ", i);
        }
    }
}