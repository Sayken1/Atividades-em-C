#include <stdio.h>
/*3. Resultado por Ponteiro
Crie a função void soma(int a, int b, int *resultado). A função não tem return: o resultado volta
pelo ponteiro.
Entrada exemplo: 3 4
Saída exemplo:
Soma: 7*/

void soma(int x, int y, int *resultado){
    *resultado = x + y;
}

int main() {
    int num1,num2;
    int resultado = 0;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &num1,&num2);
    soma(num1,num2,&resultado);
    printf("A soma dos dois numeros eh: %d", resultado);
}