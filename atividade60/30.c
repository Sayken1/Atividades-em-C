#include <stdio.h>

char palavra[100];
int contador = 0;
char letra[100];
int i;

int main(){
    printf("Digite uma palavra:\n");
    fgets(palavra, 100, stdin);

    printf("Digite a letra que quer:\n");
    fgets(letra, 100, stdin);

    for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == letra[0]){
        contador++;
    }
    }

    printf("A Letra %c: %d", letra[0], contador);
}