/*10. Divisão Segura
Crie a função int divide(int a, int b, int *resultado). Se b for 0, ela retorna 0 e não mexe no
resultado; senão, guarda a / b no ponteiro e retorna 1.
Entrada exemplo: 10 0
Saída exemplo:
Erro: divisao por zero*/

#include <stdio.h>

int divide(int x, int y, int *resultado){
    if(y == 0){
       return 0; 
    }
    *resultado = x / y;
    return 1; 
}

int main(){
    int a, b, resultado;
    printf("Digite dois numeros:\n ");
    scanf("%d %d", &a, &b);
    
    
    divide(a,b,&resultado);
    if(b == 0){
    printf("Erro na divisao");
    }
    else {
        printf("O resultado da divisao entre %d / %d da: %d", a, b, resultado);
    }
}