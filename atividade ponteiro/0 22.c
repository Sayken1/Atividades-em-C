/*22. Lendo um Número
O arquivo numero.txt contém um número inteiro. Leia-o e mostre o dobro.
Arquivo numero.txt:
21
Saída exemplo:
Dobro: 42*/


#include <stdio.h>

int numero;

int main(){
    FILE *arq = fopen("numero22.txt", "r");

    if(arq == NULL){
        printf("Erro ao abrir arquivo");
        return 1;
    }
    fprintf("Digite um numero:\n");
    fscanf(arq, "%d", &numero);
    fclose(arq);

    printf("Dobro: %d", numero * 2);
}