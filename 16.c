#include <stdio.h>

int numero;
int maior = 0;

int main(){
printf("Digite um numero: ");
scanf("%d", &numero);

while(numero != 0){
if(numero > maior){
maior = numero;
}

printf("Digite um numero: ");
scanf("%d", &numero);
}

printf("Maior: %d", maior);
}