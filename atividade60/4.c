#include <stdio.h>

int numero1;
int numero2;
int numero3;
int maior;

int main(){
printf("Digite tres numeros inteiros: \n");
scanf("%d %d %d", &numero1, &numero2, &numero3);

if(numero1 >= numero2 && numero1 >= numero3){
maior = numero1;
}
else if(numero2 >= numero1 && numero2 >= numero3){
maior = numero2;
}
else{
maior = numero3;
}

printf("Maior: %d", maior);
}