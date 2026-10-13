#include <stdio.h>

char v[]= {'A','B'};
int inteiro[2];
int resto;
int quociente;

int main(){
for (int i = 0; i < 2; i++){
printf("Digite o numero de %c: \n", v[i]);
scanf("%d", &inteiro[i]);
}
quociente = inteiro[0] / inteiro[1];
printf("quociente: %d \n", quociente);
resto = inteiro[0] % inteiro[1];
printf("resto: %d \n", resto);
}

