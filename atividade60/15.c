#include <stdio.h>

int numero;
int soma = 0;

int main(){
printf("Digite um numero: ");
scanf("%d", &numero);

while(numero != 0){
soma = soma + numero;

printf("Digite um numero: ");
scanf("%d", &numero);
}
printf("Soma: %d", soma);
}