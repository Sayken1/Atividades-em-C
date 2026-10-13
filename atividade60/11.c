#include <stdio.h>

int num;
int soma =0;   

int main(){

printf("Digite um numero para somar todos os impares: \n");
scanf("%d", &num);

for(int i = 1; i <= num; i += 2){
    soma += i;
}
printf("Soma dos impares: %d", soma);
}