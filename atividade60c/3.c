/* QUESTÃO 3 — Cédulas do Troco
Leia um valor inteiro em reais e mostre a menor quantidade de cédulas de 100, 50, 20, 10, 5, 2 e 1 que forma esse valor. 100: 3 50: 1 20: 1 10: 1 5: 1 2: 1 1: 0

FOCO DA QUESTÃO:
- Divida pelo maior valor de cédula possível e atualize o restante com %.
*/

#include <stdio.h>

int valor;
int cedulas1;
int cedulas2;
int cedulas3;
int cedulas4;
int cedulas5;
int cedulas6;
int cedulas7;

int main(){
    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor); // Lê os dados informados pelo usuário.

cedulas1 = valor / 100; // Calcula quantas cédulas desse valor cabem.
valor = valor % 100; // Guarda o restante para calcular as próximas cédulas.

cedulas2 = valor / 50; // Calcula quantas cédulas desse valor cabem.
valor = valor % 50; // Guarda o restante para calcular as próximas cédulas.

cedulas3 = valor / 20; // Calcula quantas cédulas desse valor cabem.
valor = valor % 20; // Guarda o restante para calcular as próximas cédulas.

cedulas4 = valor / 10; // Calcula quantas cédulas desse valor cabem.
valor = valor % 10; // Guarda o restante para calcular as próximas cédulas.

cedulas5 = valor / 5; // Calcula quantas cédulas desse valor cabem.
valor = valor % 5; // Guarda o restante para calcular as próximas cédulas.

cedulas6 = valor / 2; // Calcula quantas cédulas desse valor cabem.
valor = valor % 2; // Guarda o restante para calcular as próximas cédulas.

cedulas7 = valor / 1; // Calcula quantas cédulas desse valor cabem.

printf("100: %d\n", cedulas1);
printf("50: %d\n", cedulas2);
printf("20: %d\n", cedulas3);
printf("10: %d\n", cedulas4);
printf("5: %d\n", cedulas5);
printf("2: %d\n", cedulas6);
printf("1: %d\n", cedulas7);
}

/*
#include <stdio.h>

int valor;
int cedulas[7] = {100,50,20,10,5,2,1};
int cedulav[7];

int main(){
    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);

for(int i = 0; i < 7; i++){
    cedulav[i] = valor / cedulas[i];
    valor = valor % cedulas[i];
    printf("%d:%d \n", cedulas[i] ,cedulav[i]);
}
}
//

#include <stdio.h>

int valor;
int cedulas[7] = {100,50,20,10,5,2,1};

int main(){
    printf("Digite um valor inteiro: \n");
    scanf("%d", &valor);

for(int i = 0; i < 7; i++){
    printf("%d:%d \n", cedulas[i] , valor/cedulas[i]);
    valor = valor% cedulas[i];
}
}
*/