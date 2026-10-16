/* QUESTÃO 9 — Calculadora Segura
Leia uma opção (1 = soma, 2 = subtração, 3 = multiplicação, 4 = divisão) e dois números inteiros. Use switch para mostrar o resultado. Na divisão, se o segundo número for 0, mostre "Erro: divisao por zero" em vez de dividir. Erro: divisao por zero

FOCO DA QUESTÃO:
- switch seleciona a operação; break evita cair no próximo caso e divisão exige divisor diferente de zero.
*/

#include <stdio.h>

int opcao;
int numero1;
int numero2;
int resultado;

int main(){
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");

    printf("Digite a opcao: \n");
    scanf("%d", &opcao); // Lê os dados informados pelo usuário.

    printf("Digite dois numeros inteiros: \n");
    scanf("%d %d", &numero1, &numero2); // Lê os dados informados pelo usuário.

switch(opcao){ // Direciona para a operação escolhida.
case 1:
    resultado = numero1 + numero2;
    printf("Resultado: %d", resultado);
    break;

case 2:
    resultado = numero1 - numero2;
    printf("Resultado: %d", resultado);
    break;

case 3:
    resultado = numero1 * numero2;
    printf("Resultado: %d", resultado);
    break;

case 4:
    if(numero2 == 0){ // Impede uma divisão por zero.
        printf("Erro: divisor por zero");
    }
    else{ // Executa quando as condições anteriores falham.
    resultado = numero1 / numero2;
    printf("Resultado: %d", resultado);
    }
    break;

default:
    printf("Opcao invalida");
    }
}
