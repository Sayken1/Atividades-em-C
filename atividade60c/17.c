/* QUESTÃO 17 — Senha com Tentativas
A senha correta é 1234. Usando do-while, dê ao usuário no máximo 3 tentativas. A cada erro, mostre "Senha incorreta". No fim, mostre "Acesso liberado" ou "Acesso bloqueado". Senha incorreta Senha incorreta Acesso liberado

FOCO DA QUESTÃO:
- do-while garante uma tentativa; controle o limite de três tentativas.
*/

#include <stdio.h>

int main() {
    int senha, tentativas = 0;

    do {
        printf("Digite a senha: ");
        scanf("%d", &senha);
        tentativas++; // Incrementa o contador de tentativas.

        if (senha != 1234) { // Verifica se a senha está incorreta.
            printf("Senha incorreta\n");
        }
    } while (senha != 1234 && tentativas < 3); // Continua enquanto a senha estiver incorreta e as tentativas forem menores que 3.

    if (senha == 1234) { // Verifica se a senha está correta.
        printf("Acesso liberado\n");
    } else { // Caso contrário, bloqueia o acesso.
        printf("Acesso bloqueado\n");
    }
}