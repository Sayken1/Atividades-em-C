/* QUESTÃO 18 — Nota Válida
Usando do-while, leia uma nota inteira até ela estar entre 0 e 10. A cada valor inválido, mostre "Nota invalida". Nota invalida Nota invalida Nota: 8

FOCO DA QUESTÃO:
- Repita a leitura enquanto a nota estiver fora do intervalo de 0 a 10.
*/

#include <stdio.h>

int main() {
    int nota;

    do {
        printf("Digite uma nota (0 a 10): ");
        scanf("%d", &nota);

        if (nota < 0 || nota > 10) { // Verifica se a nota está fora do intervalo válido.
            printf("Nota invalida\n"); // Mostra mensagem de nota inválida.
        }
    } while (nota < 0 || nota > 10); // Continua enquanto a nota estiver fora do intervalo de 0 a 10.

    printf("Nota: %d", nota);
}