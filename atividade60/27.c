#include <stdio.h>

void linha(int tamanho, char c){
    for(int i = 0; i < tamanho; i++){
        printf("%c", c);
    }
    printf("\n");
}

int main(){
    int tamanho;
    char c;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &tamanho);
    printf("Digite o caractere da linha: ");
    scanf(" %c", &c);

    linha(tamanho, c);
}