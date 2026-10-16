/* QUESTÃO 30 — Contando a Letra A
Leia uma palavra e conte quantas letras a minúsculas ela tem. Letras a: 3 Nível 1 — Médio

FOCO DA QUESTÃO:
- fgets lê a linha; o laço percorre a palavra e conta as ocorrências do caractere escolhido.
*/

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

    for(i = 0; palavra[i] != '\0'; i++){ // Percorre os dados para processar cada elemento.
        if(palavra[i] == letra[0]){ // Conta quando encontra a letra procurada.
        contador++;
    }
    }

    printf("A Letra %c: %d", letra[0], contador);
}
