# Exercícios de Fixação — Linguagem C (material de estudo)

Cada arquivo `N.c` começa com o enunciado da questão em comentário e lembretes gerais de lógica. Os arquivos que estavam vazios no ZIP receberam uma estrutura mínima para que possam ser preenchidos.

## Como estudar cada exercício
1. **Entrada:** quais dados o programa lê?
2. **Processamento:** qual cálculo, condição ou repetição transforma esses dados?
3. **Saída:** o que precisa ser mostrado e em qual formato?
4. **Teste mental:** simule a execução com o exemplo do PDF, acompanhando as variáveis.
5. **Casos-limite:** teste zero, números negativos quando permitidos, valores repetidos e limites do vetor.

## Lembretes de lógica
- `if / else`: escolha entre caminhos; `&&` exige que ambas as condições sejam verdadeiras e `||` exige ao menos uma.
- `for`: use quando a quantidade de repetições é conhecida ou controlada por contador.
- `while`: verifica a condição antes de executar; pode executar zero vezes.
- `do { ... } while (...)`: executa pelo menos uma vez, útil para menus e validação.
- Acumulador: começa normalmente em `0` e soma valores (`soma += valor`). Contador: incrementa quando um evento ocorre (`contador++`).
- Divisão inteira: `a / b` descarta a parte decimal; `a % b` retorna o resto. Para separar dígitos, use `n % 10` e depois `n /= 10`.
- Vetores: índices começam em `0`; para `n` elementos, o último índice válido é `n - 1`.
- Maior/menor: inicialize com o primeiro elemento válido, não com zero, se os dados puderem ser negativos.
- Funções: o tipo de retorno precisa corresponder ao valor retornado; `return` encerra a função.
- Ponteiros: `&x` passa o endereço de `x`; `*x` acessa/altera o valor apontado.
- Strings: percorra `s[i]` até `s[i] == '\0'`; `scanf("%s", s)` lê uma palavra sem espaços.
- `switch`: lembre-se de `break` para evitar executar o próximo `case` por queda sequencial.
- Antes de dividir, confira se o divisor é diferente de zero. Antes de acessar um vetor, confira os limites.

## Compilação
No terminal, dentro da pasta dos exercícios: `gcc 1.c -o 1` e depois execute `./1` (Linux/macOS) ou `1.exe` (Git Bash/Windows, conforme configuração). Cada arquivo deve ser compilado separadamente, pois cada um tem sua própria `main`.

**Observação:** o ZIP original tinha vários arquivos vazios e alguns problemas de sintaxe/estrutura. Os arquivos vazios permanecem como modelos iniciais com o enunciado; os exercícios preenchidos foram mantidos com alterações pontuais, incluindo a correção de sintaxe da questão 26 e a remoção de versões duplicadas da questão 3. Revise e teste cada solução antes de usar como gabarito.
