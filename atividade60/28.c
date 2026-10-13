#include <stdio.h>

void incrementa(int *x){
    (*x)++;
}

int main() {
int soma;
    printf("Digite um numero:\n");
    scanf("%d", &soma);
    for(int i = 0; i < 3; i++) {
        incrementa(&soma);
    }
    printf("Valor incrementado: %d\n", soma);
}