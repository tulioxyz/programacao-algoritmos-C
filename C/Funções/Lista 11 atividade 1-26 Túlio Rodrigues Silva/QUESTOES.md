# Lista 11

1. Crie uma função chamada imprimirLinha() que imprime uma linha com
20 asteriscos. No main, chame essa função três vezes.
-----------------------------------------------------------------------------------
2. Crie uma função chamada calcularDobro que recebe um número inteiro
e retorna seu dobro. Teste a função no main com os valores 3, 7 e 10.
-----------------------------------------------------------------------------------
3. Crie uma função ehPar(int n) que retorna 1 se o número for par e 0 caso
contrário. No main, leia um número e informe se ele é par ou não
usando a função.
-----------------------------------------------------------------------------------
4. Analise o código a seguir e preencha a tabela com os valores das
variáveis:

int quadrado(int x) {
    return x * x;
}

int main() {
    int a = 2, b = 3, c;
        c = quadrado(a + b);
    return 0;
}

Linha a b c
após int a = 2, b = 3, c;
após c = quadrado(a + b);
-----------------------------------------------------------------------------------
5. O código abaixo apresenta um erro. Identifique e corrija:

int imprimirMensagem() {
    printf("Olá, mundo!\n");
}

int main() {
    imprimirMensagem();
    return 0;
}
-----------------------------------------------------------------------------------
6. Crie um vetor de 5 posições. Leia 5 valores do teclado e imprima os
valores ao contrário da ordem de entrada.
-----------------------------------------------------------------------------------
7. Leia 10 números inteiros e mostre quantos são pares e quantos são
ímpares.
-----------------------------------------------------------------------------------
8. Crie uma função mediaVetor(float v[], int tamanho) que retorna a média
dos valores de um vetor. Teste a função no main.
-----------------------------------------------------------------------------------
9. Complete a tabela abaixo simulando a execução do código:
int v[3] = {4, 2, 8};
for (int i = 0; i < 3; i++) {
v[i] = v[i] + i;
}

i v[0] v[1] v[2]
0
1
2
-----------------------------------------------------------------------------------
10.Analise o seguinte código. Há algum erro? Justifique.

int valores[5];
    for (int i = 1; i <= 5; i++) {
    scanf("%d", &valores[i]);
}
-----------------------------------------------------------------------------------
11.Leia um nome completo usando fgets. Mostre na tela:
O nome digitado
O número de letras (sem contar espaços)
A primeira letra do nome
-----------------------------------------------------------------------------------
12. Crie uma função int contarVogais(char s[]) que retorna a quantidade de
vogais na string.
-----------------------------------------------------------------------------------
13.Faça um programa que leia 5 nomes e os imprima em ordem inversa de
entrada.
-----------------------------------------------------------------------------------
14.O que será impresso?
char nome[10] = "Ana";
printf("%s", &nome[1]);
-----------------------------------------------------------------------------------
15.Há erro neste trecho? Por quê?
char nome[5] = "Pedro";
printf("%s", nome);
-----------------------------------------------------------------------------------
16. Crie uma função void dobrarValor(int *p) que dobra o valor da variável
passada por referência. Teste no main.
-----------------------------------------------------------------------------------
17.Crie dois ponteiros para int, aponte para duas variáveis diferentes e
imprima os valores e os endereços.
-----------------------------------------------------------------------------------
18.Usando ponteiros, leia 5 valores e armazene em um vetor. Depois
imprima os valores usando notação de ponteiro (sem colchetes).
-----------------------------------------------------------------------------------
19.Preencha a tabela abaixo simulando o comportamento dos ponteiros:
int x = 3, y = 7;
int *p = &x;
*p = *p + 2;
p = &y;
*p = *p - 1;

Etapa x y *p
após *p = *p + 2
após *p = *p - 1
-----------------------------------------------------------------------------------
20.Qual erro ocorre no código abaixo? Corrija ou sugira modificações.
int *p;
*p = 10;
printf("%d", *p);
-----------------------------------------------------------------------------------
21.Declare um vetor de inteiros com 5 posições. Crie um ponteiro int *p que
aponte para o primeiro elemento do vetor. Preencha o vetor usando
scanf, acessando as posições via ponteiro (*(p + i)), e depois imprima os
valores.
-----------------------------------------------------------------------------------
22.Crie um vetor de char com 10 posições. Atribua a palavra "Caderno"
manualmente, caractere por caractere. Depois, use um ponteiro char *p
para percorrer e imprimir a string caractere por caractere, sem usar
colchetes.
-----------------------------------------------------------------------------------
23.Crie uma função int contarLetra(char *str, char letra) que percorre uma
string e retorna quantas vezes um caractere aparece nela. Teste com
"banana" e 'a'
-----------------------------------------------------------------------------------
24.Considere o seguinte código e complete a tabela:
int v[4] = {10, 20, 30, 40};
int *p = v;
*(p + 2) = 99;
p++;
*p = 77;
Índice v[0] v[1] v[2] v[3]
Após execução
-----------------------------------------------------------------------------------
25.Simule a execução da seguinte função usando ponteiros com strings:

void modificar(char *str) {
    while (*str != '\0') {
        if (*str == 'a') *str = '@';
        str++;
    }
}

int main() {
    char palavra[] = "banana";
    modificar(palavra);
    printf("%s", palavra);
    return 0;
}

Pergunta: O que será impresso?
-----------------------------------------------------------------------------------
26. O que está errado neste código? Corrija:

void imprimirValores(int *v) {
    for (int i = 0; i <= 5; i++) {
    printf("%d\n", *(v + i));
    }
}

int main() {
    int vet[5] = {1, 2, 3, 4, 5};
    imprimirValores(vet);
    return 0;
}