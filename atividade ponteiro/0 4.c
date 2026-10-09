#include <stdio.h>
/*4. Troca
Crie a função void troca(int *a, int *b). Leia dois números, troque-os e imprima.
Entrada exemplo: 3 7
Saída exemplo:
a = 7, b = 3*/
void troca(int *x, int *y){
    int valor;
    valor = *x;
    *x = *y;
    *y = valor;
}

int main() {
    int num1,num2;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1,&num2);
    troca(&num1,&num2);
    printf("numero 1 = %d\nnumero 2 = %d", num1,num2);
}