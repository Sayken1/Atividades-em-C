/*18. Carro Antigo
Crie a struct Carro com modelo e ano. Leia um carro e diga se ele é antigo (fabricado antes de 2000).
Entrada exemplo: Fusca 1978
Saída exemplo:
Fusca e antigo*/


#include <stdio.h>

struct Carro {
    char modelo[50];
    int ano;
};

int main() {
    struct Carro car;

    printf("Digite o modelo e o ano do carro: ");
    scanf("%s %d", car.modelo, &car.ano);

    // Verificação se o carro é antigo
    if (car.ano < 2000) {
        printf("%s e antigo\n", car.modelo);
    } else {
        printf("%s nao e antigo\n", car.modelo);
    }
}