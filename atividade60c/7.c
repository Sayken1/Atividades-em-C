/* QUESTÃO 7 — Tipo de Triângulo
Leia três lados. Se não formarem um triângulo, imprima "Nao forma triangulo". Se formarem, diga se é "Equilatero" (3 lados iguais), "Isosceles" (2 iguais) ou "Escaleno" (todos diferentes). Escaleno

FOCO DA QUESTÃO:
- Primeiro valide a desigualdade triangular; só depois classifique os lados.
*/

#include <stdio.h>

int lado1;
int lado2;
int lado3;

int main(){
printf("Digite os tres lados do triangulo: \n");
scanf("%d %d %d", &lado1, &lado2, &lado3); // Lê os dados informados pelo usuário.

if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){ // A soma de quaisquer dois lados deve superar o terceiro.
    if(lado1 == lado2 && lado2 == lado3){ // Verifica se a condição é verdadeira.
    printf("Equilatero");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){ // Verifica se a condição é verdadeira.
    printf("Isosceles");
    }
    else{ // Executa quando as condições anteriores falham.
    printf("Escaleno");
    }
}
else{ // Executa quando as condições anteriores falham.
printf("Nao forma triangulo");
}
}
