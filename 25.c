#include <stdio.h>

float media3(float a, float b, float c) {
return (a + b + c) / 3;
}
int aprovado(float media) {
if (media >= 7) {
return 1;
}
return 0;
}

float n1, n2, n3, m;

int main() {
printf("Digite as 3 notas:\n");
scanf("%f %f %f", &n1, &n2, &n3);
    
m = media3(n1, n2, n3);
    
printf("Media: %f\n", m);
    
if (aprovado(m)) {
printf("Aprovado\n");
} 
else {
printf("Reprovado\n");
}
}