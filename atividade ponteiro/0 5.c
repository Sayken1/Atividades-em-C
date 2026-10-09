#include <stdio.h>
/*5. Percorrendo com Ponteiro
Leia 5 números para um vetor. Imprima-os usando *(p + i), onde p aponta para o vetor (sem usar v[i] na
impressão).
Entrada exemplo: 4 8 15 16 23
Saída exemplo:
4 8 15 16 23*/
int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;
    printf("Numeros do ponteiro:\n");
 for (int i = 0; i < 5; i++) {
    printf("%d ", *(p + i));
 }
}