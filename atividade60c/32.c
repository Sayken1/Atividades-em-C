/* QUESTÃO 32 — Número de Armstrong
Um número de 3 dígitos é de Armstrong quando é igual à soma dos cubos dos seus dígitos. Crie a função int eh_armstrong(int n) e teste o número lido. 153 e um numero de Armstrong

FOCO DA QUESTÃO:
- Separe os dígitos, eleve cada um ao cubo e compare a soma com o número original.
*/

#include <stdio.h>

int eh_armstrong(int n) {
    int original = n;
    int soma = 0;

    while (n > 0) {
        int digito = n % 10; // Obtém o último dígito
        soma += digito * digito * digito; // Eleva ao cubo e adiciona à soma
        n /= 10; // Remove o último dígito
    }

    return soma == original; // Retorna 1 se for Armstrong, caso contrário 0
}

int main() {
    int n;
    printf("Digite um número de 3 dígitos: ");
    scanf("%d", &n);

    if (eh_armstrong(n)) {
        printf("%d é um número de Armstrong.\n", n);
    } else {
        printf("%d não é um número de Armstrong.\n", n);
    }
}