/* QUESTÃO 8 — IMC
Leia o peso (kg) e a altura (m) como float, calcule o IMC (peso ÷ altura²) e classifique: abaixo de 18.5 = "Abaixo do peso", abaixo de 25 = "Normal", abaixo de 30 = "Sobrepeso", a partir de 30 = "Obesidade". IMC: 22.857143 Normal

FOCO DA QUESTÃO:
- Calcule IMC = peso / (altura * altura) e use faixas em ordem crescente.
*/

#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso (kg): \n");
    scanf("%f", &peso); 

    printf("Digite a altura (m): \n");
    scanf("%f", &altura); 

    imc = peso / (altura * altura);

    printf("IMC: %.2f ", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else {
        printf("Obesidade\n");
    }
}
