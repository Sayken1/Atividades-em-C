# Ponteiros, Structs e Arquivos em C

Este material continua de onde a Referência de Sintaxe parou. Você já usou ponteiros na passagem por referência (`int *x`); agora vamos entender o que eles são de verdade, depois juntar vários dados num só tipo com `struct` e, por fim, guardar tudo em arquivos para não perder quando o programa fechar.

Tudo aqui usa **apenas `#include <stdio.h>`** — inclusive as funções de arquivo.

---

## Parte 1 — Ponteiros

### 1.1 Toda variável mora num endereço

A memória do computador é uma fileira enorme de "gavetas" numeradas. Cada variável ocupa uma gaveta, e o número da gaveta é o **endereço** dela.

```
   endereço   valor
  ┌─────────┬───────┐
  │  1000   │  10   │  ← int x = 10;
  ├─────────┼───────┤
  │  1004   │ 1000  │  ← int *p = &x;   (p guarda o ENDEREÇO de x)
  └─────────┴───────┘
```

(Os números 1000 e 1004 são só ilustrativos — os endereços reais são escolhidos pelo sistema.)

| Escrita | Lê-se | Resultado no desenho |
|---|---|---|
| `x` | "valor de x" | 10 |
| `&x` | "endereço de x" | 1000 |
| `p` | "valor de p" (um endereço) | 1000 |
| `*p` | "o que está no endereço guardado em p" | 10 |

### 1.2 Declarando e usando um ponteiro

```c
#include <stdio.h>

int main() {
    int x = 10;
    int *p = &x;          // p aponta para x

    printf("x = %d\n", x);
    printf("*p = %d\n", *p);

    *p = 20;              // muda o valor que esta no endereco de x
    printf("x agora = %d\n", x);

    printf("Endereco de x: %p\n", &x);   // %p mostra um endereco
    return 0;
}
```

```
x = 10
*p = 10
x agora = 20
Endereco de x: 0x7ffd...   (muda a cada execução)
```

> 💡 O `*` tem **dois papéis**: na declaração (`int *p`) ele diz "p é um ponteiro para int"; no uso (`*p = 20`) ele diz "vá até o endereço guardado em p".

### 1.3 Ponteiro nulo (`NULL`)

Um ponteiro que ainda não aponta para nada deve valer `NULL`. Sempre teste antes de usar `*p` se houver chance de ele ser `NULL` — usar `*` num ponteiro nulo derruba o programa.

```c
int *p = NULL;
if (p != NULL) {
    printf("%d\n", *p);
} else {
    printf("Ponteiro vazio\n");
}
```

Isso vai ser muito importante nos arquivos: `fopen` devolve `NULL` quando não consegue abrir o arquivo.

### 1.4 Passagem por referência (revisão)

Você já viu isso: para uma função alterar uma variável da `main`, ela recebe o **endereço** da variável.

```c
#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 3, y = 7;
    troca(&x, &y);
    printf("x = %d, y = %d\n", x, y);   // x = 7, y = 3
    return 0;
}
```

Também é assim que uma função "devolve" mais de um resultado:

```c
void divide(int a, int b, int *quociente, int *resto) {
    *quociente = a / b;
    *resto = a % b;
}
```

### 1.5 Ponteiros e vetores

O nome de um vetor **é o endereço do primeiro elemento**. Por isso dá para guardá-lo num ponteiro:

```c
int v[5] = {10, 20, 30, 40, 50};
int *p = v;          // mesmo que p = &v[0];
```

E somar um número a um ponteiro anda de **elemento em elemento** (não de byte em byte) — isso se chama **aritmética de ponteiros**:

| Expressão | Significa | Valor |
|---|---|---|
| `*p` | `v[0]` | 10 |
| `*(p + 1)` | `v[1]` | 20 |
| `*(p + 4)` | `v[4]` | 50 |
| `p++` | `p` passa a apontar para o próximo elemento | — |

```c
#include <stdio.h>

int main() {
    int v[5] = {10, 20, 30, 40, 50};
    int *p = v;
    int soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += *p;   // soma o elemento atual
        p++;          // anda para o proximo
    }
    printf("Soma: %d\n", soma);   // Soma: 150
    return 0;
}
```

Por isso uma função que recebe vetor pode ser escrita de dois jeitos equivalentes:

```c
int soma_vetor(int v[], int n);   // jeito que você já conhece
int soma_vetor(int *v, int n);    // mesma coisa, escrito como ponteiro
```

> 💡 A diferença entre dois ponteiros do mesmo vetor dá a **distância em elementos**. Se `p` aponta para `v[3]`, então `p - v` vale `3` — útil para descobrir a posição de um elemento.

### 1.6 Ponteiros e strings

Uma string é um vetor de `char` terminado em `'\0'`. Dá para percorrê-la com um ponteiro até achar o fim:

```c
#include <stdio.h>

int tamanho(char *s) {
    int n = 0;
    while (*s != '\0') {
        n++;
        s++;
    }
    return n;
}

int main() {
    char palavra[50];
    scanf("%s", palavra);
    printf("Tamanho: %d\n", tamanho(palavra));
    return 0;
}
```

### 1.7 Erros comuns com ponteiros

| Erro | Exemplo | Por que é errado |
|---|---|---|
| Usar ponteiro sem apontar para nada | `int *p; *p = 5;` | `p` tem lixo: escreve num lugar qualquer da memória |
| Esquecer o `&` ao passar | `troca(x, y);` | A função recebe valores, não endereços |
| Esquecer o `*` ao usar | `p = 20;` em vez de `*p = 20;` | Muda o endereço guardado, não o valor apontado |
| Usar ponteiro `NULL` | `FILE *f = fopen(...); fprintf(f, ...);` sem testar | Se a abertura falhou, o programa cai |
| Sair do vetor com aritmética | `*(v + 5)` num vetor de 5 | Mesma coisa que `v[5]`: fora do vetor |

---

## Parte 2 — Structs

### 2.1 Por que struct?

Imagine guardar nome, idade e nota de 30 alunos. Sem struct, você precisaria de três vetores separados e torcer para que `nomes[i]`, `idades[i]` e `notas[i]` continuem "combinando". Uma **struct** junta dados relacionados num tipo só:

```c
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
```

Cada item dentro da struct é um **campo** (ou membro).

### 2.2 `typedef`: dando um nome curto

Sem `typedef`, toda vez é preciso escrever `struct Aluno a;`. Com `typedef`, o tipo ganha um nome próprio:

```c
typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

Aluno a;    // bem mais curto
```

A partir daqui vamos usar sempre o formato com `typedef`.

### 2.3 Acessando os campos com `.`

```c
#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno a;
    scanf("%s %d %f", a.nome, &a.idade, &a.nota);   // nome e string: sem &

    printf("%s tem %d anos e tirou %f\n", a.nome, a.idade, a.nota);
    if (a.nota >= 7) {
        printf("Aprovado\n");
    }
    return 0;
}
```

```
Entrada: Ana 20 8.5
Saída:   Ana tem 20 anos e tirou 8.500000
         Aprovado
```

Também dá para inicializar tudo de uma vez, na ordem dos campos:

```c
Aluno b = {"Bruno", 22, 6.0};
```

### 2.4 Vetor de structs

```c
Aluno turma[30];

for (int i = 0; i < n; i++) {
    scanf("%s %f", turma[i].nome, &turma[i].nota);
}
```

Lê-se `turma[i].nota` como "a nota do aluno da posição `i`".

### 2.5 Struct dentro de struct

```c
typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    char nome[50];
    Data nascimento;
} Pessoa;

Pessoa p;
p.nascimento.ano = 2004;   // um ponto para cada nível
```

### 2.6 Structs em funções: valor ou ponteiro?

**Por valor** — a função recebe uma **cópia**. Bom para só ler os dados:

```c
float media(Aluno a) {
    return a.nota;     // so le, nao altera
}
```

**Por ponteiro** — a função recebe o **endereço** e pode alterar o original. Aqui entra o operador **`->`**:

```c
void da_bonus(Aluno *a, float bonus) {
    a->nota = a->nota + bonus;   // a->nota e o mesmo que (*a).nota
}

// na main:
da_bonus(&aluno, 1.0);
```

| Você tem... | Para acessar o campo `nota` use |
|---|---|
| uma struct `a` | `a.nota` |
| um ponteiro `p` para struct | `p->nota` (atalho para `(*p).nota`) |

### 2.7 Exemplo completo

```c
#include <stdio.h>

typedef struct {
    char nome[50];
    float saldo;
} Conta;

void deposita(Conta *c, float valor) {
    c->saldo = c->saldo + valor;
}

int saca(Conta *c, float valor) {
    if (valor > c->saldo) {
        return 0;          // nao deu
    }
    c->saldo = c->saldo - valor;
    return 1;              // deu certo
}

void mostra(Conta c) {
    printf("%s: R$ %f\n", c.nome, c.saldo);
}

int main() {
    Conta c = {"Ana", 100.0};
    deposita(&c, 50.0);
    if (saca(&c, 500.0) == 0) {
        printf("Saldo insuficiente\n");
    }
    saca(&c, 30.0);
    mostra(c);
    return 0;
}
```

```
Saldo insuficiente
Ana: R$ 120.000000
```

---

## Parte 3 — Arquivos

Até agora, tudo que o programa guardava sumia quando ele terminava. Com arquivos, os dados ficam salvos no disco.

### 3.1 O caminho de sempre: abrir → usar → fechar

```c
FILE *arq = fopen("dados.txt", "w");   // 1. abrir
if (arq == NULL) {                     //    ...e conferir!
    printf("Erro ao abrir arquivo\n");
    return 1;
}
fprintf(arq, "Ola, arquivo!\n");       // 2. usar
fclose(arq);                           // 3. fechar
```

- `FILE *` é um **ponteiro** para uma struct que a `stdio.h` usa para controlar o arquivo. Você não mexe nos campos dela; só passa o ponteiro para as funções.
- **Sempre** teste se `fopen` devolveu `NULL` (arquivo inexistente, sem permissão, pasta errada…).
- **Sempre** feche com `fclose`. Sem isso, o que você escreveu pode não ser salvo de verdade.

### 3.2 Modos de abertura

| Modo | Para | Se o arquivo não existe | Se o arquivo já existe |
|---|---|---|---|
| `"r"` | ler | `fopen` devolve `NULL` | lê desde o começo |
| `"w"` | escrever | cria | **apaga tudo** e começa vazio |
| `"a"` | acrescentar no fim | cria | mantém o conteúdo e escreve no final |
| `"rb"` / `"wb"` | ler / escrever em **binário** | como `"r"` / `"w"` | como `"r"` / `"w"` |

> ⚠️ Cuidado com o `"w"`: abrir um arquivo importante com `"w"` por engano apaga o conteúdo dele.

### 3.3 Escrevendo texto: `fprintf` e `fputc`

`fprintf` funciona igual ao `printf`, só que com o arquivo como primeiro parâmetro:

```c
#include <stdio.h>

int main() {
    FILE *arq = fopen("numeros.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    for (int i = 1; i <= 5; i++) {
        fprintf(arq, "%d\n", i * i);
    }
    fclose(arq);
    printf("Arquivo gravado\n");
    return 0;
}
```

Conteúdo de `numeros.txt`:
```
1
4
9
16
25
```

`fputc(c, arq)` escreve um único caractere.

### 3.4 Lendo texto: `fscanf`

`fscanf` funciona como o `scanf`, mas lê do arquivo. Ele **devolve quantos itens conseguiu ler** — e devolve `EOF` (uma constante da `stdio.h`) quando o arquivo acaba. Isso permite ler "até o fim":

```c
#include <stdio.h>

int main() {
    FILE *arq = fopen("numeros.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    int x, soma = 0;
    while (fscanf(arq, "%d", &x) == 1) {   // enquanto conseguir ler 1 numero
        soma += x;
    }
    fclose(arq);
    printf("Soma: %d\n", soma);            // Soma: 55
    return 0;
}
```

Para várias informações por linha, é só colocar vários especificadores. Com o arquivo `alunos.txt`:

```
Ana 8.5
Bruno 6.0
Carla 9.0
```

```c
char nome[50];
float nota;
while (fscanf(arq, "%s %f", nome, &nota) == 2) {   // 2 itens por linha
    printf("%s: %f\n", nome, nota);
}
```

> 💡 Assim como no `scanf`, o `%s` do `fscanf` para no primeiro espaço. Por isso, nos exercícios, nomes são sempre **uma palavra só**.

### 3.5 Lendo caractere por caractere: `fgetc`

`fgetc(arq)` devolve o próximo caractere, ou `EOF` no fim. Repare que o resultado vai num **`int`**, não num `char` — é o `int` que consegue guardar o valor especial `EOF`.

```c
#include <stdio.h>

int main() {
    FILE *arq = fopen("texto.txt", "r");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    int c, linhas = 0;
    while ((c = fgetc(arq)) != EOF) {
        if (c == '\n') {
            linhas++;
        }
    }
    fclose(arq);
    printf("Linhas: %d\n", linhas);
    return 0;
}
```

> 💡 `(c = fgetc(arq)) != EOF` faz duas coisas: guarda o caractere lido em `c` **e** compara com `EOF`. Os parênteses em volta da atribuição são obrigatórios.

### 3.6 Lendo uma linha inteira: `fgets`

`fgets(texto, tamanho, arq)` lê uma linha **inteira, com espaços**, até `tamanho - 1` caracteres. Devolve `NULL` no fim do arquivo. A linha lida inclui o `'\n'` do final (se couber).

```c
char linha[100];
while (fgets(linha, 100, arq) != NULL) {
    printf("Li: %s", linha);   // a linha ja tem o \n
}
```

| Função | Lê | Para em | Devolve no fim |
|---|---|---|---|
| `fscanf(arq, "%d", &x)` | dados formatados | espaço/fim de linha | `EOF` |
| `fgetc(arq)` | 1 caractere | — | `EOF` |
| `fgets(s, n, arq)` | 1 linha (com espaços) | `'\n'` ou `n - 1` caracteres | `NULL` |

### 3.7 Acrescentando no fim: modo `"a"`

```c
FILE *log = fopen("log.txt", "a");
if (log != NULL) {
    fprintf(log, "Programa executado\n");
    fclose(log);
}
```

Cada execução acrescenta uma linha nova, sem apagar as anteriores.

### 3.8 Arquivos binários: `fwrite` e `fread`

Arquivos de texto são legíveis por humanos. Arquivos **binários** guardam os bytes exatamente como estão na memória — ótimos para salvar structs inteiras de uma vez.

Para isso usamos o operador **`sizeof`**, que diz quantos bytes um tipo ocupa:

```c
fwrite(endereco, sizeof(Tipo), quantidade, arq);   // grava
fread(endereco, sizeof(Tipo), quantidade, arq);    // le e devolve quantos leu
```

```c
#include <stdio.h>

typedef struct {
    char nome[50];
    float preco;
} Produto;

int main() {
    Produto lista[2] = {{"Caneta", 2.5}, {"Caderno", 15.0}};

    FILE *arq = fopen("produtos.bin", "wb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    fwrite(lista, sizeof(Produto), 2, arq);   // grava as 2 structs
    fclose(arq);

    Produto lidos[2];
    arq = fopen("produtos.bin", "rb");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }
    int qtd = fread(lidos, sizeof(Produto), 2, arq);
    fclose(arq);

    for (int i = 0; i < qtd; i++) {
        printf("%s: %f\n", lidos[i].nome, lidos[i].preco);
    }
    return 0;
}
```

```
Caneta: 2.500000
Caderno: 15.000000
```

> ⚠️ Um arquivo binário aberto num editor de texto aparece como "lixo" — é normal. Ele só deve ser lido de volta com `fread`, usando a mesma struct.

---

## Parte 4 — Juntando tudo

Programa que lê alunos do teclado, guarda num vetor de structs, salva em arquivo e depois lê o arquivo de volta para calcular a média:

```c
#include <stdio.h>

typedef struct {
    char nome[50];
    float nota;
} Aluno;

void salva(Aluno *turma, int n) {
    FILE *arq = fopen("turma.txt", "w");
    if (arq == NULL) {
        printf("Erro ao abrir arquivo\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(arq, "%s %f\n", turma[i].nome, turma[i].nota);
    }
    fclose(arq);
}

int carrega(Aluno *turma) {
    FILE *arq = fopen("turma.txt", "r");
    if (arq == NULL) {
        return 0;
    }
    int n = 0;
    while (fscanf(arq, "%s %f", turma[n].nome, &turma[n].nota) == 2) {
        n++;
    }
    fclose(arq);
    return n;
}

int main() {
    Aluno turma[50];
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s %f", turma[i].nome, &turma[i].nota);
    }
    salva(turma, n);

    Aluno lidos[50];
    int qtd = carrega(lidos);
    float soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma += lidos[i].nota;
    }
    printf("Alunos no arquivo: %d\n", qtd);
    printf("Media: %f\n", soma / qtd);
    return 0;
}
```

```
Entrada: 3
         Ana 8
         Bruno 6
         Carla 10
Saída:   Alunos no arquivo: 3
         Media: 8.000000
```

Repare como as três partes se encaixam: a **struct** organiza os dados, os **ponteiros** deixam as funções trabalharem no vetor original, e o **arquivo** guarda tudo para depois.

---

## Resumo

| Assunto | Sintaxe | Lembrete |
|---|---|---|
| Endereço | `&x` | Onde a variável mora |
| Ponteiro | `int *p = &x;` | Guarda um endereço |
| Acessar o apontado | `*p` | "Vá até o endereço" |
| Ponteiro vazio | `NULL` | Teste antes de usar |
| Vetor e ponteiro | `*(v + i)` é `v[i]` | O nome do vetor é um endereço |
| Struct | `typedef struct { ... } Nome;` | Junta dados relacionados |
| Campo | `s.campo` / `p->campo` | `.` com struct, `->` com ponteiro |
| Abrir arquivo | `FILE *f = fopen("nome", "modo");` | Teste `f == NULL` |
| Escrever texto | `fprintf(f, ...)`, `fputc(c, f)` | Igual ao `printf` |
| Ler texto | `fscanf`, `fgetc`, `fgets` | Fim: `EOF` (ou `NULL` no `fgets`) |
| Binário | `fwrite` / `fread` + `sizeof` | Modos `"wb"` / `"rb"` |
| Fechar | `fclose(f);` | Sempre! |
