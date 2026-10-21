/*15. Data por Extenso
Crie a struct Data com dia, mes e ano. Leia uma data e mostre-a por extenso, usando switch para o nome
do mês.
Entrada exemplo: 9 10 2026
Saída exemplo:
9 de outubro de 2026*/


#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

int main() {
    struct Data d;

    printf("Digite o dia, mês e ano (um de cada vez): \n");
    scanf("%d %d %d", &d.dia, &d.mes, &d.ano);

    printf("%d de ", d.dia);
    switch (d.mes) {
        case 1:
            printf("janeiro");
            break;
        case 2:
            printf("fevereiro");
            break;
        case 3:
            printf("março");
            break;
        case 4:
            printf("abril");
            break;
        case 5:
            printf("maio");
            break;
        case 6:
            printf("junho");
            break;
        case 7:
            printf("julho");
            break;
        case 8:
            printf("agosto");
            break;
        case 9:
            printf("setembro");
            break;
        case 10:
            printf("outubro");
            break;
        case 11:
            printf("novembro");
            break;
        case 12:
            printf("dezembro");
            break;
        default:
            printf("mês inválido");
    }
    printf(" de %d\n", d.ano);
}