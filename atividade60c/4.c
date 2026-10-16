/* QUESTÃO 4 — Maior de Três
Leia três números inteiros e imprima o maior, usando if / else if / else e &&. Maior: 9

FOCO DA QUESTÃO:
- Compare cada número com os outros dois; && exige que as duas comparações sejam verdadeiras.
*/

#include <stdio.h>

int numero1;
int numero2;
int numero3;
int maior;

int main(){
printf("Digite tres numeros inteiros: \n");
scanf("%d %d %d", &numero1, &numero2, &numero3); // Lê os dados informados pelo usuário.

if(numero1 >= numero2 && numero1 >= numero3){ // Ambas as comparações precisam ser verdadeiras.
maior = numero1;
}
else if(numero2 >= numero1 && numero2 >= numero3){ // Ambas as comparações precisam ser verdadeiras.
maior = numero2;
}
else{ // Executa quando as condições anteriores falham.
maior = numero3;
}

printf("Maior: %d", maior);
}
