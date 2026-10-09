#include <stdio.h>
/*7. Maior e Menor de Dois
Crie a função void ordena_dois(int a, int b, int *maior, int *menor).
Entrada exemplo: 8 3
Saída exemplo:
Maior: 8
Menor: 3*/
void ordenar(int x, int y, int *maior, int *menor){
    *maior = x;
    *menor = y;
    if(x > y){
        *maior = x;
        *menor = y;
    }
    else {
        *maior = y;
        *menor = x;
    }
}
int main() {
    int a,b;
    int maior,menor;
    
    printf("Digite dois numeros:\n");
    scanf("%d %d",&a,&b);
    ordenar(a,b,&maior,&menor);
    printf("maior:%d\nmenor:%d",maior,menor);
}