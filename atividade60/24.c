#include <stdio.h>
int eh_par(int n){
if(n % 2 == 0){
return 1;
}
else{
return 0;
}
}
int num[5];
int contador = 0;
int main(){  
printf("Digite 5 numeros:\n");
for(int i = 0; i < 5; i++){
scanf("%d", &num[i]);

if(eh_par(num[i]) == 1){
contador++;
}
}
printf("Quantidade de pares: %d\n", contador);
}   