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
scanf("%d", &opcao);

printf("Digite dois numeros inteiros: \n");
scanf("%d %d", &numero1, &numero2);

switch(opcao){
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
if(numero2 == 0){
printf("Erro: divisor por zero");
}
else{
resultado = numero1 / numero2;
printf("Resultado: %d", resultado);
}
break;

default:
printf("Opcao invalida");
}
}