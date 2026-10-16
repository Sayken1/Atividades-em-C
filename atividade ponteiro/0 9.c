/*9. Tamanho com Ponteiro de char
Crie a função int tamanho(char *s) que conta os caracteres andando com o ponteiro até o '\0'.
Entrada exemplo: ponteiro
Saída exemplo:
Tamanho: 8*/

#include <stdio.h>

int tamanho(char *s){
    int tamanho = 0;
    while(*s != '\0'){
        tamanho++;
        s++;
    }
    return tamanho;
}

int main(){
    char palavra[100];

    printf("Digite uma palavra:\n");
    scanf("%s", palavra);

    printf("Tamanho: %d\n", tamanho(palavra));
}