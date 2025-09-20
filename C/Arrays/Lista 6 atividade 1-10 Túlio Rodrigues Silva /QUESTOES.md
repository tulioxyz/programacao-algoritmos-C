# Lista 06

Exercício 1 — Declarando e preenchendo um vetor
Objetivo: Aprender a declarar um vetor, preencher e exibir os valores.
Enunciado:
Crie um programa que declare um vetor de 5 números inteiros. O programa
deve ler os valores digitados pelo usuário e, depois, exibir todos os valores na
tela.
Passo a Passo:
1. Declare um vetor de 5 posições (int numeros[5]).
2. Use um for para ler 5 valores do teclado e armazenar no vetor.
3. Use outro for para exibir os valores armazenados no vetor.
-----------------------------------------------------------------------------------
Exercício 2 — Somatório dos elementos
Objetivo: Calcular o somatório dos elementos de um vetor.
Enunciado:
Peça 6 números inteiros para o usuário e mostre a soma de todos eles.
Passo a Passo:
1. Declare um vetor com 6 posições.
2. Leia os 6 valores usando um for.
3. Crie uma variável chamada soma inicializada com zero.
4. Some cada valor do vetor dentro do for (soma += vetor[i];).
5. Ao final, exiba o valor da soma.
-----------------------------------------------------------------------------------
Exercício 3 — Encontrar o maior valor
Objetivo: Aprender a buscar o maior valor dentro de um vetor.
Enunciado:
Solicite 8 números inteiros e informe qual é o maior número digitado.
Passo a Passo:
1. Declare um vetor de 8 posições.
2. Leia os 8 números do usuário.

Vetores
3. Crie uma variável chamada maior e inicialize com o primeiro elemento
do vetor (maior = vetor[0];).
4. Percorra o vetor com for comparando:
Se vetor[i] > maior, atualize maior = vetor[i];.
5. Ao final, exiba o valor de maior.
-----------------------------------------------------------------------------------
Exercício 4 — Contar números pares
Objetivo: Praticar condição e contagem com vetores.
Enunciado:
Leia 10 números e mostre quantos deles são números pares.
Passo a Passo:
1. Declare um vetor de 10 posições.
2. Leia os valores do usuário.
3. Crie uma variável chamada contadorPares e inicialize com 0.
4. Para cada elemento do vetor:
Se vetor[i] % 2 == 0, aumente contadorPares++.
5. Ao final, exiba quantos números pares foram encontrados.
-----------------------------------------------------------------------------------
Exercício 5 — Média dos valores
Objetivo: Praticar somatório e cálculo de média.
Enunciado:
Peça 5 notas e calcule a média. Depois, exiba as notas que estão acima da
média.
Passo a Passo:
1. Declare um vetor de 5 posições para as notas.
2. Leia as 5 notas.
3. Some todas as notas e calcule a média (media = soma / 5).
4. Use um for para percorrer o vetor e, se nota[i] > media, exiba essa nota
como estando acima da média.
-----------------------------------------------------------------------------------
Exercício 6 — Preencher e Exibir (com funções)
Objetivo: Modularizar o código criando funções para preencher e exibir um
vetor.

Vetores
Requisitos:
• Crie uma função chamada preencherVetor que recebe um vetor e seu
tamanho e permite que o usuário preencha os valores.
• Crie uma função chamada exibirVetor que recebe um vetor e seu
tamanho e imprime todos os seus elementos.
Exemplo de assinaturas das funções:
void preencherVetor(int v[], int tamanho);
void exibirVetor(int v[], int tamanho);
-----------------------------------------------------------------------------------
Exercício 7 — Somar elementos (com função)
Objetivo: Criar uma função para somar todos os elementos do vetor.
Requisitos:
• Utilize a função preencherVetor para ler os dados.
• Crie uma função chamada somarVetor que recebe o vetor e seu
tamanho e retorna o valor da soma.
Exemplo de assinaturas das funções:
int somarVetor(int v[], int tamanho);
-----------------------------------------------------------------------------------
Exercício 8 — Encontrar o maior valor (com função)
Objetivo: Criar uma função para identificar o maior valor do vetor.
Requisitos:
• Utilize a função preencherVetor para ler os dados.
• Crie uma função chamada maiorValor que retorna o maior valor do vetor.
Exemplo de assinaturas das funções:
int maiorValor(int v[], int tamanho);
-----------------------------------------------------------------------------------
Exercício 9 — Contar pares (com função)
Objetivo: Modularizar a contagem de números pares no vetor.
Requisitos:
• Utilize a função preencherVetor para ler os dados.
• Crie uma função chamada contarPares que retorna quantos valores
pares existem no vetor.

Vetores
Exemplo de assinaturas das funções:
int contarPares(int v[], int tamanho);
-----------------------------------------------------------------------------------
Exercício 10 — Notas acima da média (com funções)
Objetivo: Praticar funções combinadas.
Requisitos:
• Crie:
o Uma função preencherVetor.
o Uma função somarVetor.
o Uma função exibirAcimaDaMedia que recebe o vetor e sua média
e exibe as notas acima dela.
Exemplo de assinaturas das funções:
void exibirAcimaDaMedia(float v[], int tamanho, float media);
• O programa deve:
1. Ler 5 notas.
2. Calcular a média usando a soma.
3. Exibir quais notas estão acima da média.
-----------------------------------------------------------------------------------
Desafio Extra — Criando uma pequena biblioteca de funções
Proposta:
• Agrupar as funções:
o preencherVetor
o exibirVetor
o somarVetor
o maiorValor
o contarPares
• E criar um menu para que o usuário escolha qual operação deseja
executar.