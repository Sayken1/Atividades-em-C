#include <stdio.h>

int vetor[5];
int valor;
int i;
int encontrou = 0;

int main(){
printf("Digite 5 numeros:\n");

for(i = 0; i < 5; i++){
scanf("%d", &vetor[i]);
}

printf("Digite um valor: ");
scanf("%d", &valor);

for(i = 0; i < 5; i++){
if(vetor[i] == valor){
encontrou = 1;
}
}

if(encontrou == 1){
printf("%d esta no vetor", valor);
}
else{
printf("%d nao esta no vetor", valor);
}
}