/* QUESTÃO 25 — Média e Situação
Crie as funções float media3(float a, float b, float c) e int aprovado(float media) (retorna 1 se a média for maior ou igual a 7). Leia três notas e mostre a média e a situação. Media: 7.000000 Aprovado

FOCO DA QUESTÃO:
- Separe o cálculo da média da regra de aprovação; a função aprovado retorna 1 ou 0.
*/

#include <stdio.h>

float media3(float a, float b, float c) {
return (a + b + c) / 3; // Soma as três notas e divide pela quantidade.
}
int aprovado(float media) {
if (media >= 7) { // Nota mínima para aprovação.
return 1; // Retorna 1 para indicar verdadeiro/sim.
}
return 0;
}

float n1, n2, n3, m;

int main() {
printf("Digite as 3 notas:\n");
scanf("%f %f %f", &n1, &n2, &n3); // Lê os dados informados pelo usuário.
    
m = media3(n1, n2, n3);
    
printf("Media: %f\n", m);
    
if (aprovado(m)) { // Verifica se a condição é verdadeira.
printf("Aprovado\n");
} 
else { // Executa quando as condições anteriores falham.
printf("Reprovado\n");
}
}
