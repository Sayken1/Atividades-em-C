/*20. Struct dentro de Struct
Crie a struct Data (dia, mês, ano) e a struct Pessoa com nome e nascimento (do tipo Data). Leia uma
pessoa e mostre os dados.
Entrada exemplo: Diego 15 3 2004
Saída exemplo:
Diego nasceu em 15/3/2004*/


#include <stdio.h>

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

Pessoa p;

int main(){
    printf("Digite: Nome, dia, mes e ano:\n")
    scanf("%s %d %d %d", p.nome, &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);

    printf("%s nasceu em %d/%d/%d", p.nome, p.nascimento.dia, p.nascimento.mes, p.nascimento.ano);
}