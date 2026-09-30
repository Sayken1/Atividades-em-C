#include <stdio.h>

int valor;
int cedulas1;
int cedulas2;
int cedulas3;
int cedulas4;
int cedulas5;
int cedulas6;
int cedulas7;

int main(){
printf("Digite um valor inteiro: \n");
scanf("%d", &valor);

cedulas1 = valor / 100;
valor = valor % 100;

cedulas2 = valor / 50;
valor = valor % 50;

cedulas3 = valor / 20;
valor = valor % 20;

cedulas4 = valor / 10;
valor = valor % 10;

cedulas5 = valor / 5;
valor = valor % 5;

cedulas6 = valor / 2;
valor = valor % 2;

cedulas7 = valor / 1;

printf("100: %d\n", cedulas1);
printf("50: %d\n", cedulas2);
printf("20: %d\n", cedulas3);
printf("10: %d\n", cedulas4);
printf("5: %d\n", cedulas5);
printf("2: %d\n", cedulas6);
printf("1: %d\n", cedulas7);
}