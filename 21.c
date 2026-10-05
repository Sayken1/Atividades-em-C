#include <stdio.h>

int n;
int vetor[100];
int i;

int main(){
printf("Digite o tamanho do vetor: ");
scanf("%d", &n);

for(i = 0; i < n; i++){
printf("Digite o %d numero: ", i + 1);
scanf("%d", &vetor[i]);
}

for(i = n - 1; i >= 0; i--){
printf("%d ", vetor[i]);
}
}