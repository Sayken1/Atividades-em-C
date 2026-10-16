/* QUESTÃO 6 — Ano Bissexto
Leia um ano e informe se ele é bissexto. 2024 e bissexto 2000 é bissexto, 1900 não é.

FOCO DA QUESTÃO:
- Ano bissexto: divisível por 4 e não por 100, ou divisível por 400.
*/

#include <stdio.h>

int ano;

int main(){
printf("Digite um ano: \n");
scanf("%d", &ano); // Lê os dados informados pelo usuário.
    if(ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){ // Aplica as exceções da regra do ano bissexto.
    printf("%d e bissexto", ano);
}
    else{ // Executa quando as condições anteriores falham.
    printf("%d nao e bissexto", ano);
}
}
