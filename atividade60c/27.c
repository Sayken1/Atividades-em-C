/* QUESTÃO 27 — Desenhando Linhas
Crie a função void linha(int tamanho, char c) que imprime o caractere c repetido tamanho vezes e pula uma linha. Na main, chame linha(10, '=') e depois linha(5, '*'). ========== *****

FOCO DA QUESTÃO:
- A função recebe tamanho e caractere e imprime esse caractere em um laço.
*/

#include <stdio.h>

void linha(int tamanho, char c){
    for(int i = 0; i < tamanho; i++){ // Percorre os dados para processar cada elemento.
        printf("%c", c);
    }
    printf("\n");
}

int main(){
    int tamanho;
    char c;
    printf("Digite o tamanho da linha: ");
    scanf("%d", &tamanho); // Lê os dados informados pelo usuário.
    printf("Digite o caractere da linha: ");
    scanf(" %c", &c); // Lê os dados informados pelo usuário.

    linha(tamanho, c);
}
