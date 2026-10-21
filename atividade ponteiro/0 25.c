/*25. Contando Linhas
Conte quantas linhas tem o arquivo texto.txt, lendo caractere por caractere com fgetc.
Arquivo texto.txt:
primeira linha
segunda linha
terceira linha
Saída exemplo:
Linhas: 3*/


#include <stdio.h>

int caractere;
int linhas = 0;

int main(){
    FILE *arq = fopen("texto25.txt", "r");

    if(arq == NULL){
        printf("Erro");
        return 1;
    }

    while((caractere = fgetc(arq)) != EOF){
        if(caractere == '\n'){
            linhas++;
        }
    }

    fclose(arq);

    printf("Linhas: %d", linhas);
}