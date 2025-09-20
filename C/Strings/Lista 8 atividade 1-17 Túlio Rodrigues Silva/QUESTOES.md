# Lista 08

1. Leia e exiba uma string (nome do usuário)
Objetivo: Entender como funciona a leitura e exibição de strings.
• Declare uma variável char nome[50];
• Peça ao usuário que digite o nome dele (com espaços).
• Use fgets() para ler a string.
• Mostre o nome digitado usando printf() ou puts().
-----------------------------------------------------------------------------------
2. Leia duas strings e diga qual é a maior em quantidade de letras
Objetivo: Trabalhar com strlen() e comparação de tamanhos.
• Peça duas palavras ou nomes.
• Meça o comprimento de cada string com strlen().
• Compare os valores e exiba qual string tem mais letras (ou se são iguais).
-----------------------------------------------------------------------------------
3. Copie uma string para outra variável
Objetivo: Aprender a copiar o conteúdo de uma string para outra.
• Leia uma string chamada origem.
• Declare outra string destino.
• Use strcpy(destino, origem) para fazer a cópia.
• Mostre ambas as strings para verificar se o conteúdo foi copiado
corretamente.
-----------------------------------------------------------------------------------
4. Leia duas strings e diga se são iguais ou diferentes
Objetivo: Introduzir a comparação de strings com strcmp().
• Leia duas palavras.
• Compare com strcmp(str1, str2).
• Se o resultado for 0, são iguais. Caso contrário, são diferentes.

Strings
• Mostre uma mensagem explicando o resultado da comparação.
-----------------------------------------------------------------------------------
5. Exiba cada caractere da string separadamente, com seu índice
Objetivo: Mostrar como percorrer uma string caractere por caractere.
• Leia uma string.
• Use um laço for até strlen(str) para percorrer.
• Em cada passo, exiba:
Índice 0: A
Índice 1: n
Índice 2: a
• Mostre que o primeiro caractere está na posição 0, o segundo na 1, e assim
por diante.
-----------------------------------------------------------------------------------
6. Conte quantas letras existem em uma string (sem contar espaços e \n)
Objetivo: Filtrar caracteres válidos.
• Leia uma frase.
• Percorra a string e conte apenas os caracteres que não forem espaço ' '
nem '\n'.
• Mostre o total.
Exemplo: “Ana Maria” → 8 letras.
-----------------------------------------------------------------------------------
7. Crie uma função transformarParaMaiuscula(char str[])
Objetivo: Implementar sua própria função para modificar strings.
• Dentro da função, percorra a string.
• Converta letras minúsculas ('a' a 'z') para maiúsculas ('A' a 'Z') usando:
if(str[i] >= 'a' && str[i] <= 'z')
str[i] -= 32;
• No main(), leia a string e chame a função.
-----------------------------------------------------------------------------------
8. Crie a função transformarParaMinuscula(char str[])
Objetivo: Fazer o oposto da questão anterior.
• Converta letras maiúsculas ('A' a 'Z') para minúsculas ('a' a 'z').
if(str[i] >= 'A' && str[i] <= 'Z')
str[i] += 32;
• Teste com uma string mista (letras maiúsculas e minúsculas).
-----------------------------------------------------------------------------------
9. Leia 5 nomes e imprima todos em ordem invertida (último para o primeiro)
Objetivo: Praticar matriz de strings e manipulação de índices.
• Use char nomes[5][30];
• Leia os nomes com fgets() ou scanf("%s").
• Depois, use um for de 4 a 0 para mostrar do último para o primeiro.
-----------------------------------------------------------------------------------
10. Leia 3 nomes e diga qual vem primeiro em ordem alfabética
Objetivo: Trabalhar com ordenação/comparação textual.
• Compare os nomes com strcmp().
• Armazene o "menor" nome em uma string auxiliar e compare com os
demais.
• Mostre o nome que viria primeiro no dicionário.
-----------------------------------------------------------------------------------
11. Verifique se uma palavra é um palíndromo (ex: “ovo”, “arara”)
Objetivo: Trabalhar com acesso posicional reverso.
• Leia uma palavra.
• Compare o primeiro com o último, o segundo com o penúltimo, etc.
• Crie uma função int ehPalindromo(char str[]) que retorne 1 ou 0.
• Mostre "É palíndromo" ou "Não é".
-----------------------------------------------------------------------------------
12. Crie a função removerQuebraDeLinha(char str[])

Objetivo: Tratar corretamente strings lidas com fgets().
• Ao usar fgets(), o \n vem no final.
• Verifique se o último caractere é \n, e troque por '\0'.
• Use strlen(str) para acessar o último índice.
-----------------------------------------------------------------------------------
13. Faça um menu para manipular uma string
Objetivo: Aplicar vários conceitos em um mini programa.
• Permita:
1. Digitar nova string
2. Exibir em maiúsculas
3. Exibir em minúsculas
4. Contar letras
5. Sair
• Crie funções separadas para cada operação.
• Use switch ou if para controle do menu.
-----------------------------------------------------------------------------------
14. Conte quantas palavras existem em uma frase
Objetivo: Trabalhar com análise de texto.
• Leia uma frase com fgets().
• Conte os espaços e ignore múltiplos espaços seguidos.
• Adicione +1 ao final se a frase não for vazia.
Exemplo: "Olá mundo C" → 3 palavras
-----------------------------------------------------------------------------------
15. Leia 5 nomes e permita buscar por um deles
Objetivo: Juntar matriz de strings com busca.
• Use char nomes[5][30];
• Peça um nome para procurar.
• Crie a função int buscarNome(char nomes[][30], int qtd, char alvo[]) que
retorne a posição ou -1.
• Mostre o resultado: "Nome encontrado" ou "Não encontrado".
-----------------------------------------------------------------------------------
16. Inverta os caracteres de uma string
Objetivo: Manipular posições e criar função personalizada.
• Leia uma palavra.
• Crie a função void inverterString(char str[]).
• Use uma variável do início (i = 0) e outra do fim (j = strlen(str) - 1) e troque os
caracteres até o meio.
• Mostre a string invertida.
-----------------------------------------------------------------------------------
17. Sistema de Cadastro de Alunos com Notas
Objetivo:
Criar um sistema de cadastro e consulta de alunos e notas, utilizando matriz de
strings, vetores de notas, manipulação de strings, formatação de saída e
funções próprias.

Funcionalidades exigidas:
1. Menu principal com as opções:
1 - Cadastrar aluno
2 - Lançar notas
3 - Listar alunos e médias
0 - Sair

2. Cadastro de aluno
• O usuário poderá cadastrar um aluno por vez (nome com espaços).
• O sistema deve permitir até 10 alunos.
• O nome deve ser armazenado em letras maiúsculas, mesmo que o
usuário digite minúsculas.
• Para isso, o aluno deve implementar a função:
void transformarParaMaiuscula(char str[]);
• O nome deve ser armazenado na matriz:
char nomes[10][50];

3. Lançar notas
• O sistema deve:
o Mostrar a lista de alunos cadastrados, com seus códigos (índice da
linha da matriz).
o Perguntar o código do aluno escolhido.
o Solicitar a entrada de 3 notas (ex: prova1, prova2, prova3).
• As notas devem ser armazenadas em vetores paralelos:
float notas1[10], notas2[10], notas3[10];

4. Listar alunos
• O sistema deve mostrar todos os alunos já cadastrados, com:
o Nome em maiúsculas
o Notas lançadas
o Média calculada
• A listagem deve ser formatada como uma tabela alinhada. Exemplo de
saída:
ID Nome N1 N2 N3 Média
0 MARIA SILVA 7.50 8.00 6.00 7.17
1 JOÃO SOUZA 9.00 9.50 10.0 9.50

Funções recomendadas para o aluno implementar:
void transformarParaMaiuscula(char str[]);
void cadastrarAluno(char nomes[][50], int *qtd);
void lancarNotas(float n1[], float n2[], float n3[], int qtd, char nomes[][50]);
void listarAlunos(char nomes[][50], float n1[], float n2[], float n3[], int qtd);

Dicas:
• Use fgets() para ler os nomes, e lembre-se de remover o \n com uma
função auxiliar.
• Use printf com largura (%-30s, %5.2f) para deixar a tabela alinhada.