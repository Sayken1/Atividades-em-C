#include <stdio.h>

int ano;

int main(){
printf("Digite um ano: \n");
scanf("%d", &ano);
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
    printf("%d e bissexto", ano);
}
    else{
    printf("%d nao e bissexto", ano);
}
}