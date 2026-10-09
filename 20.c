#include <stdio.h>

int contador = 0;
int v[8];


int main() {
printf("Digite 8 numeros\n");
for (int i = 0; i < 8; i++) {
    printf("Numero %d: ", i + 1);
    scanf("%d", &v[i]);
if (v[i] < 0) {
    contador++;
}
}
printf("Negativos: %d", contador);
}