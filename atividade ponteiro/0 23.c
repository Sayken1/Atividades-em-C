/*23. Gravando de 1 a 10
Grave os números de 1 a 10 no arquivo numeros.txt, um por linha.
Conteúdo de numeros.txt:
1
2
...
10*/


#include <stdio.h>

int i;

int main(){
    FILE *arq = fopen("numeros23.txt", "w");

    if(arq == NULL){
        printf("Erro");
        return 1;
    }

    for(i = 1; i <= 10; i++){
        fprintf(arq, "%d\n", i);
    }

    fclose(arq);
}