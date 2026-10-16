/*8. Zerando o Vetor
Crie a função void zera(int *v, int n) que coloca 0 em todas as posições. Leia 4 números, mostre o
vetor, chame a função e mostre de novo.
Entrada exemplo: 5 6 7 8
Saída exemplo:
Antes: 5 6 7 8
Depois: 0 0 0 0*/

#include <stdio.h>

void zera(int *v, int n){
    for(int i = 0; i < n; i++){
        *(v + i) = 0;
    }
}

int main(){
    int v[4], i;
    for(i = 0; i < 4; i++){
        printf("Digite um numero:\n");
        scanf("%d", &v[i]);
        printf("\n");
    }
    
    printf("Antes: %d ", v[0]);
    for (i = 1; i < 4; i++){
    printf("%d ", v[i]);
}
    zera(v, 4);
    printf("\nDepois: %d ", v[0]);
    for (i = 1; i < 4; i++){

        printf("%d ", v[i]);
    }
}