#include <stdio.h>

int lado1;
int lado2;
int lado3;

int main(){
printf("Digite os tres lados do triangulo: \n");
scanf("%d %d %d", &lado1, &lado2, &lado3);

if(lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1){
    if(lado1 == lado2 && lado2 == lado3){
    printf("Equilatero");
    }
    else if(lado1 == lado2 || lado1 == lado3 || lado2 == lado3){
    printf("Isosceles");
    }
    else{
    printf("Escaleno");
    }
}
else{
printf("Nao forma triangulo");
}
}