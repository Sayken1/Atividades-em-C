/*12. Ficha do Aluno
Crie a struct Aluno com nome (char[50]) e nota (float). Leia um aluno e mostre o nome e a situação
(aprovado com nota ≥ 7).
Entrada exemplo: Ana 8.5
Saída exemplo:
Ana: Aprovado*/

#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno a;
    printf("Digite o nome, idade e nota do aluno:\n");
    scanf("%s %d %f", a.nome, &a.idade, &a.nota);   // nome e string: sem &

    printf("%s tem %d anos e tirou %.2f\n", a.nome, a.idade, a.nota);
    if (a.nota >= 7) {
        printf("Aprovado\n");
    }
}