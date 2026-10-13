#include <stdio.h>

int segundos;
int horas;
int minutos;


int main(){
printf("Digite quando segundos quer converter: \n");
scanf("%d", &segundos);

horas = segundos / 3600;
minutos = segundos % 3600 / 60;
segundos = segundos % 60;


printf("%d horas %d minutos %d segundos", horas, minutos, segundos);
}

