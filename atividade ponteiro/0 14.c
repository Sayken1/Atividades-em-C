/* 14. Ponto Médio
Usando uma struct Ponto com campos float, leia dois pontos e mostre o ponto médio entre eles.
Entrada exemplo: 1 2 5 8
Saída exemplo:
Ponto medio: (3.000000, 5.000000)
💡 O ponto médio é ((x1 + x2) / 2, (y1 + y2) / 2) */

#include <stdio.h>

struct Ponto {
    float x, y;
};

int main() {
    struct Ponto p1, p2, medio;

    printf("Digite as coordenadas do primeiro ponto (x y):\n");
    scanf("%f %f", &p1.x, &p1.y);

    printf("Digite as coordenadas do segundo ponto (x y):\n");
    scanf("%f %f", &p2.x, &p2.y);

    medio.x = (p1.x + p2.x) / 2.0;
    medio.y = (p1.y + p2.y) / 2.0;

    printf("Ponto medio: (%.2f, %.2f)\n", medio.x, medio.y);
}