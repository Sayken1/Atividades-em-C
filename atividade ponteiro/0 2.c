#include <stdio.h>
/*2. Dobrando pelo Ponteiro
Crie a função void dobra(int *x) que dobra o valor original. Leia um número, chame a função e imprima
o resultado.
Entrada exemplo: 7
Saída exemplo:
Dobro: 14
*/

void dobra(int *x)
{
    *x = *x * 2;
}

int main() {
    int num;
    printf("Digite um numero:\n");
    scanf("%d", &num);
    dobra(&num);
    printf("O dobro do numero eh: %d\n", num);
}