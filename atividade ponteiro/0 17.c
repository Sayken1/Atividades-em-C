/*17. Struct como Parâmetro
Crie a struct Boletim com nome e três notas (n1, n2, n3). Crie a função float media(Boletim b), que
recebe a struct por valor.
Entrada exemplo: Bruno 6 7 8
Saída exemplo:
Bruno: 7.000000*/


#include <stdio.h>

struct Boletim {
    char nome[100];
    float n1, n2, n3;
};

float media(struct Boletim b) {
    return (b.n1 + b.n2 + b.n3) / 3;
}

int main() {
    struct Boletim b;

    printf("Digite o nome e as três notas do aluno:\n");
    scanf("%s %f %f %f", b.nome, &b.n1, &b.n2, &b.n3);

    float m = media(b);
    printf("%s: %.1f\n", b.nome, m);
}