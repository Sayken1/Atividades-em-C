/*19. Aumento de Salário
Crie a struct Funcionario com nome e salario. Crie a função void aumenta(Funcionario *f, float
porcentagem), que altera o salário usando ->.
Entrada exemplo: Carla 2000 10
Saída exemplo:
Carla: 2200.000000*/


#include <stdio.h>

typedef struct {
    char nome[50];
    float salario;
} Funcionario;

void aumenta(Funcionario *f, float porcentagem){
    f->salario = f->salario + (f->salario * porcentagem / 100);
}

Funcionario funcionario;

int main(){
    float porcentagem;

    printf("Digite o nome do funcionario ");
    scanf("%s %f %f", funcionario.nome, &funcionario.salario, &porcentagem);

    aumenta(&funcionario, porcentagem);

    printf("%s: %.2f", funcionario.nome, funcionario.salario);
}