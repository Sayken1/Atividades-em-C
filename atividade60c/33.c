/* QUESTÃO 33 — Palíndromo Numérico
Crie a função int inverte(int n) que devolve o número com os dígitos invertidos. Use-a para dizer se o número lido é palíndromo (igual lido de trás para frente). 12321 e palindromo

FOCO DA QUESTÃO:
- Monte o número invertido com o último dígito e compare com o original.
*/

#include <stdio.h>

int inverte(int n) {
    int invertido = 0;
    while (n > 0) {
        invertido = invertido * 10 + n % 10;
        n /= 10;
    }
    return invertido;
}

int main() {
    int num, original;
    printf("Digite um número: ");
    scanf("%d", &n);
    original = num;
    if (original == inverte(num)) {
        printf("%d é um palíndromo.\n", original);
    } else {
        printf("%d não é um palíndromo.\n", original);
    }
}
