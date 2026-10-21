/*16. Carrinho de Compras
Crie a struct Produto com nome e preco. Leia 3 produtos para um vetor de structs e mostre o total.
Entrada exemplo: Arroz 25.90 Feijao 8.50 Cafe 15.60
Saída exemplo:
Total: 50.000000*/


#include <stdio.h>

struct Produto {
    char nome[100];
    float preco;
};

int main() {
    struct Produto produtos[3];
    float total = 0;

    for (int i = 0; i < 3; i++) {
        printf("Digite o nome e o preço do produto %d:\n", i + 1);
        scanf("%s %f", produtos[i].nome, &produtos[i].preco);
        total += produtos[i].preco;
    }

    printf("Total: %.2f\n", total);
}