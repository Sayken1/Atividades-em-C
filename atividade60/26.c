#include <stdio.h>

int absoluto(int x){
if(x < 0){
return -x;
}
return x;
}

int num;

int main() {
printf("Digite um numero:\n");
scanf("%d", &num);

printf("valor absoluto: %d", absoluto(num));")
}