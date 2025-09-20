# Lista 09

Questão 1 – Explorando endereços de memória
Enunciado:
Declare uma variável int x = 10; e imprima:
• O valor de x.
• O endereço de memória de x usando &x.
Orientações:
1. Use printf("%d", x) para imprimir o valor.
2. Use printf("%p", &x) para imprimir o endereço.
-----------------------------------------------------------------------------------
Questão 2 – Declarando e usando um ponteiro
Enunciado:
Crie um ponteiro int *p e faça com que ele aponte para x. Depois:
• Use *p para imprimir o valor de x.
• Use *p = 20 para alterar o valor de x.
Orientações:
1. Declare int *p = &x;.
2. Use *p para acessar/modificar o valor.
-----------------------------------------------------------------------------------
Questão 3 – Função que altera o valor de uma variável
Enunciado:
Crie uma função void dobrar(int *n) que dobra o valor da variável recebida.
Teste no main com:
int a = 5;
dobrar(&a);
Orientações:

• Lembre-se de passar o endereço: &a.
• Use *n = *n * 2; dentro da função.
-----------------------------------------------------------------------------------
Questão 4 – Criando e preenchendo um vetor com ponteiros
Enunciado:
Crie um vetor int v[5]. Peça ao usuário para digitar 5 valores e use aritmética de
ponteiros para armazenar e imprimir os valores.
Orientações:
1. Declare int *p = v;.
2. Para preencher: scanf("%d", (p + i));
3. Para imprimir: printf("%d", *(p + i));
-----------------------------------------------------------------------------------
Questão 5 – Imprimindo um vetor de strings com ponteiro para vetor
Enunciado:
Declare char nomes[3][10];. Leia 3 nomes e use char (*p)[10] = nomes; para
imprimi-los usando ponteiro.

char (*p)[10] => Quer dizer: um ponteiro para um vetor de 10 char
char *p[10] => Quer dizer: um vetor de 10 ponteiros para char

Orientações:
• Leitura: scanf("%s", *(p + i));
• Impressão: printf("%s", *(p + i));
-----------------------------------------------------------------------------------
Questão 6 – Impressão reversa de strings com ponteiro para vetor
Enunciado:
Reutilize o vetor de nomes da questão anterior. Imprima os nomes de trás para
frente.
Orientações:
• Use um for de i = 2 até i >= 0.

• Acesse com *(p + i).
-----------------------------------------------------------------------------------
Questão 7 – Modificando ponteiros em função
Enunciado:
Crie uma função que preencha um vetor de 3 inteiros, passado como ponteiro:
void preencher(int *v)
Orientações:
• Acesse os elementos com *(v + i).
-----------------------------------------------------------------------------------
Questão 8 – Ponteiro para ponteiro
Enunciado:
Declare:
int x = 5;
int *p = &x;
int **pp = &p;
Imprima:
• O valor de x usando **pp.
Orientações:
• Use printf("%d", **pp);
-----------------------------------------------------------------------------------
Questão 9 – Vetor de strings com char nomes[5][10] e ponteiro
Enunciado:
Crie um vetor char nomes[5][10], leia os nomes, e imprima-os com char (*p)[10] =
nomes;.
Inclua contagem de letras com strlen.