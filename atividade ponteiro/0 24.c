/*24. Somando um Arquivo
Leia todos os números inteiros do arquivo numeros.txt (quantos houver) e mostre a soma.
Arquivo numeros.txt:
5
10
15
20
Saída exemplo:
Soma: 50
💡 while (fscanf(arq, "%d", &x) == 1) repete enquanto conseguir ler um número*/


#include <stdio.h>

int numero;
int soma = 0;

int main(){
    FILE *arq = fopen("numeros24.txt", "r");

    if(arq == NULL){
        printf("Erro");
        return 1;
    }

    while(fscanf(arq, "%d", &numero) == 1){
        soma = soma + numero;
    }

    fclose(arq);

    printf("Soma: %d", soma);
}