#include <stdio.h>

int n;
int vetor[100];
int i;
int soma = 0;
int maior;
float media;

int main(){
printf("Digite o tamanho do vetor: ");
scanf("%d", &n);

printf("Digite os numeros do vetor: \n");
for(i = 0; i < n; i++){
scanf("%d", &vetor[i]);
soma = soma + vetor[i];
}

maior = vetor[0];

for(i = 1; i < n; i++){
if(vetor[i] > maior){
maior = vetor[i];
}
}

media = (float)soma / n;

printf("Media: %f\n", media);
printf("Maior: %d", maior);
}