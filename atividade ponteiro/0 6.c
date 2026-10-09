#include <stdio.h>
/*6. Soma com p++
Leia 5 números para um vetor e some-os andando com um ponteiro (p++) do primeiro ao último elemento.
Entrada exemplo: 1 2 3 4 5
Saída exemplo:
Soma: 15*/
int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += *p;   // soma o elemento atual
        p++;          // anda para o proximo
    }
    printf("Soma: %d\n", soma);   // Soma: 150
    return 0;
}