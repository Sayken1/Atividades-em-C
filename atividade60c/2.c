/* QUESTÃO 2 — Segundos para Horas
Leia uma quantidade de segundos e converta para horas, minutos e segundos. 1 h 2 min 5 s /   %

FOCO DA QUESTÃO:
- Separe o total em horas, minutos e segundos usando divisão inteira e resto.
*/

#include <stdio.h>

int segundos;
int horas;
int minutos;


int main(){
printf("Digite quando segundos quer converter: \n");
scanf("%d", &segundos); // Lê os dados informados pelo usuário.

horas = segundos / 3600; // Cada hora corresponde a 3600 segundos.
minutos = segundos % 3600 / 60; // Remove as horas e converte o restante em minutos.
segundos = segundos % 60; // Mantém apenas os segundos que sobraram.


printf("%d horas %d minutos %d segundos", horas, minutos, segundos);
}
