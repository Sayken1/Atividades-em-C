/* QUESTÃO 10 — Dias do Mês
Leia o número de um mês (1 a 12) e, usando switch, mostre quantos dias ele tem (considere fevereiro com 28). Agrupe os case dos meses que têm a mesma quantidade de dias. Para valores fora de 1 a 12, mostre "Mes invalido". O mes 4 tem 30 dias case 11: ...

FOCO DA QUESTÃO:
- Agrupe os meses com a mesma quantidade de dias; fevereiro foi considerado com 28 dias.
*/

#include <stdio.h>

int mes;
int main(){
printf("Digite o numero do mes: ");
scanf("%d", &mes); // Lê os dados informados pelo usuário.

switch(mes){ // Agrupa os meses conforme a quantidade de dias.
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("o mes %d tem 31 dias", mes);
        break;
    case 4:
    case 6:
    case 9:                                     
    case 11:
        printf("o mes %d tem 30 dias", mes);
        break;
    case 2:
        printf("o mes %d tem 28 dias", mes);
        break;
    default:
        printf("Mes invalido");
}
}
