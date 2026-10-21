/*21. Primeiro Arquivo
Crie o arquivo saida.txt e escreva nele a frase Ola, arquivo!. Mostre na tela uma mensagem de
confirmação.
Saída exemplo:
Arquivo criado
Conteúdo de saida.txt:
Ola, arquivo!*/


#include <stdio.h>


int main(){
    FILE *arq = fopen("saida21.txt", "w");

    if(arq == NULL){
        printf("Erro");
        return 1;
    }

    fprintf(arq, "nuuuu ze");
    fclose(arq);
}