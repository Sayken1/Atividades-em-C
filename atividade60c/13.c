/* QUESTÃO 13 — Múltiplos até N
Leia k e n e imprima todos os múltiplos de k que são menores ou iguais a n. 4 8 12 16 20 24 28

FOCO DA QUESTÃO:
- Percorra os valores até n e imprima aqueles divisíveis por k.
*/

#include <stdio.h>

int main() {
    int k, n;

    printf("Digite o valor de k: \n");
    scanf("%d", &k); 

    printf("Digite o valor de n: \n");
    scanf("%d", &n); 

    for(int i = 1; i <= n; i++){ // Percorre os valores até n.
        if(i % k == 0){ // Verifica se o valor é divisível por k.
            printf("%d ", i);
        }
    }
}