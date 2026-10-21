/*11. Ponto no Plano
Crie a struct Ponto com os campos inteiros x e y. Leia um ponto e imprima-o.
Entrada exemplo: 3 -2
Saída exemplo:
Ponto: (3, -2)*/

#include <stdio.h>

typedef struct{
    int x;
    int y;
} Ponto;

int main(){
 Ponto a;
    printf("Digite dois numeros:\n");
    scanf("%d %d", &a.x, &a.y);
    printf("Ponto: (%d, %d)", a.x, a.y);
}