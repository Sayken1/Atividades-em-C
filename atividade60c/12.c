/* QUESTÃO 12 — Potência com For
Leia uma base e um expoente (inteiros, expoente ≥ 0) e calcule a potência usando um for. Resultado: 1024

FOCO DA QUESTÃO:
- Comece o resultado em 1 e multiplique pela base uma vez por repetição do expoente.
*/

#include <stdio.h>

int main() {
    int base, expoente, resultado = 1;

    printf("Digite a base: \n");
    scanf("%d", &base); 

    printf("Digite o expoente (>=0): \n");
    scanf("%d", &expoente); 

    for(int i = 0; i < expoente; i++){ // Repete a multiplicação da base pelo resultado.
        resultado *= base;
    }

    printf("Resultado: %d", resultado);
}