#include <stdio.h>


int main (){
    char palavra[100];
    int contador = 0;
    printf("Digite uma palavra:\n");
    scanf("%s", palavra);
    for (int i = 0; palavra[i] != '\0'; i++){
    contador++;
    }
    printf("tamanho da palavra: %d", contador);
}