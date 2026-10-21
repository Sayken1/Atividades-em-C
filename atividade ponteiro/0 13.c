/*13. Retângulo
Crie a struct Retangulo com base e altura (float). Leia um retângulo e mostre área e perímetro.
Entrada exemplo: 4 2.5
Saída exemplo:
Area: 10.000000
Perimetro: 13.000000*/


#include <stdio.h>

struct Retangulo {
    float base, altura;
};

int main() {
    struct Retangulo ret;

    printf("Digite a base e a altura do retângulo (separados por espaço): \n");
    scanf("%f %f", &ret.base, &ret.altura);

    printf("Area: %.2f\n", ret.base * ret.altura);
    printf("Perimetro: %.2f\n", 2 * (ret.base + ret.altura));
}