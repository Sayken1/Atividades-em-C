#include <stdio.h>

int vetor[6];
int somaPares = 0;
int somaImpares = 0;
int i;

int main(){

for(i = 0; i < 6; i++){
printf("Digite um numero: \n");
scanf("%d", &vetor[i]);
}

for(i = 0; i < 6; i++){
if(vetor[i] % 2 == 0){
somaPares = somaPares + vetor[i];
}
else{
somaImpares = somaImpares + vetor[i];
}
}
printf("Soma dos pares: %d\n", somaPares);
printf("Soma dos impares: %d", somaImpares);
}