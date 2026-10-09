#include <stdio.h>
/*1. Endereço e Valor
Declare int x = 10; e um ponteiro p apontando para x. Imprima x e *p. Depois, usando só o ponteiro,
mude o valor para 20 e imprima x de novo.
Saída exemplo:
x = 10
*p = 10
x agora = 20*/

int main() {
    int x = 10;
    int *p = &x;         // p aponta para x

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);

    *p = 20;              // muda o valor que esta no endereco de x
    printf("x agora = %d\n", x);

    printf("Endereco de x: %p\n", &x);   // %p mostra um endereco
    return 0;
}