# Lista 10

1. Primeiros Contatos com Arquivos
a) Criar e gravar uma frase
Objetivo:
Criar um arquivo chamado frase.txt, escrever a frase "Aprender C e essencial!" e fechá-lo.
Dicas:
• Use fopen("frase.txt", "w").
• Grave usando fprintf.
• Finalize com fclose.

b) Abrir e acrescentar uma linha
Objetivo:
Abra frase.txt no modo de acréscimo e adicione a frase "Continuamos estudando arquivos.".
Dicas:
• Mude o modo para "a".
• Tente abrir o arquivo antes de escrever, verifique se deu certo.
-----------------------------------------------------------------------------------
2. Escrevendo e lendo números com arquivos
a) Salvar um vetor de inteiros
Objetivo:
Dado um vetor de 5 inteiros, grave seus valores (um por linha) em um arquivo numeros.txt.
Exemplo de vetor:
int v[5] = {10, 20, 30, 40, 50};
Dicas:
• Use um laço for com fprintf(fp, "%d\n", v[i]);.

b) Ler e exibir os números do arquivo
Objetivo:
Leia numeros.txt e exiba os valores armazenados na tela.
Dicas:
• Use fscanf(fp, "%d", &variavel) com um laço while.
• Feche sempre o arquivo após ler.
-----------------------------------------------------------------------------------
3. Cadastro simples de alunos
a) Gravar nomes e notas
Objetivo:
Peça ao usuário 3 nomes e 3 notas (um nome + nota por linha). Grave no arquivo alunos.txt:
Exemplo de conteúdo:
Maria 8.0
João 5.5
Ana 9.1
Dicas:
• Armazene os dados com fprintf(fp, "%s %f\n", nome, nota);.
• Use vetores simples char nomes[3][30] e float notas[3];.

b) Ler os dados e classificar
Objetivo:
Leia alunos.txt, classifique os alunos com nota ≥ 6 como Aprovados, os demais como
Reprovados.
Dicas:
• Use fscanf(fp, "%s %f", nome, &nota); dentro de um while.
• Faça um if (nota >= 6) para decidir o status.
• Exiba na tela:
Maria — 8.0 — Aprovado
-----------------------------------------------------------------------------------
4. Desafio de segurança simples: embaralhar o texto
a) Codificar (criptografia simples)
Objetivo:
Leia um arquivo de texto chamado mensagem.txt e grave um novo arquivo codificado.txt com
os caracteres trocados por seus sucessores na tabela ASCII (ex.: 'A' vira 'B', 'B' vira 'C').
Dicas:
• Use fgetc e fputc.
• Para cada caractere c, grave c + 1.
• Não altere espaços ou quebras de linha se quiser manter a estrutura.

b) Decodificar
Objetivo:
Faça o processo reverso: abra codificado.txt e gere decodificado.txt, retornando os
caracteres ao original (c - 1).
Dicas:
• A lógica é praticamente a mesma do item anterior.
• Isso simula uma "criptografia César" básica.
-----------------------------------------------------------------------------------
5. Gravando e lendo uma variável
a) Gravar um número inteiro
Objetivo:
Peça um número ao usuário e grave-o em um arquivo binário numero.dat.
Dicas:
• Use fwrite(&numero, sizeof(int), 1, fp);
• Abra o arquivo com "wb".

b) Ler o número gravado
Objetivo:
Abra numero.dat, leia o valor gravado e mostre na tela.
Dicas:
• Use "rb" para leitura.
• Faça fread(&variavel, sizeof(int), 1, fp); e mostre o valor com printf.
-----------------------------------------------------------------------------------
6. Vetores inteiros em arquivos binários
a) Gravar vetor de inteiros
Objetivo:
Grave um vetor de 10 inteiros (fixo ou lido do usuário) no arquivo vetor.dat.
Dicas:
• Use fwrite(vetor, sizeof(int), 10, fp);

b) Ler o vetor e exibir
Objetivo:
Leia vetor.dat e mostre todos os elementos na tela.
Dicas:
• Crie um vetor do mesmo tamanho para armazenar os dados lidos com fread.
-----------------------------------------------------------------------------------
7. Vetores com dois tipos: notas e nomes simples
a) Gravar nomes de alunos e suas notas
Objetivo:
Peça ao usuário 3 nomes (máx. 30 caracteres cada) e 3 notas para cada nome. Grave no
arquivo binário dados.dat, da seguinte ordem:
Nome1 Nota1 Nota2 Nota3
Nome2 Nota1 Nota2 Nota3
Nome3 Nota1 Nota2 Nota3
(grave como blocos de char e float)
Dicas:
• Para gravar nomes: fwrite(nome, sizeof(char), 30, fp); (tamanho fixo como 30)
• Para notas: use um vetor float notas[3]; e fwrite(notas, sizeof(float), 3, fp);

b) Ler e exibir os nomes e as notas
Objetivo:
Abra dados.dat, leia e exiba o nome e notas de cada aluno.
Dicas:
• Use um laço para ler os nomes (pode ser com char nome[30]) e logo após ler as 3
floats.
• Mostre as notas com duas casas decimais e destaque quem teve média ≥ 6.
-----------------------------------------------------------------------------------
8. Tamanho do arquivo e número de registros
a) Contar quantos inteiros há no arquivo vetor.dat
Objetivo:
Use funções como fseek, ftell para calcular quantos inteiros estão salvos no arquivo
vetor.dat.
Dicas:

• Use fseek(fp, 0, SEEK_END);
• Pegue o tamanho com ftell(fp)
• Divida por sizeof(int) para obter a quantidade de elementos
-----------------------------------------------------------------------------------
9. Modificar uma nota no meio do arquivo
a) Atualizar a segunda nota do segundo aluno
Objetivo:
Reabra dados.dat, vá direto até a segunda nota do segundo aluno e atualize seu valor para
10.0.
Dicas:
• Assuma que o nome ocupa sempre 30 bytes (ex: char nome[30];)
• Cada aluno ocupa 30 + 3×sizeof(float) bytes
• Use fseek para ir direto à posição desejada
Exemplo: para a segunda nota do segundo aluno:
fseek(fp, 30 + 3*sizeof(float) + 30 + sizeof(float), SEEK_SET);
-----------------------------------------------------------------------------------
10 – Matrizes em binários
a) Gravar uma matriz 3×3 de inteiros em um arquivo binário
Objetivo:
Peça ao usuário para preencher uma matriz 3×3 de inteiros e grave os dados no arquivo
matriz.dat.
Dicas:
• Declare como: int matriz[3][3];
• Use dois for aninhados para ler os dados.
• Grave com:
fwrite(matriz, sizeof(int), 9, fp);
ou
fwrite(matriz, sizeof(matriz), 1, fp);
• Use "wb" ao abrir o arquivo.

b) Ler a matriz gravada e exibir no formato tradicional
Objetivo:
Abra matriz.dat, leia os dados da matriz 3×3 e exiba no formato:

1 2 3
4 5 6
7 8 9
Dicas:
• Declare a mesma matriz int matriz[3][3];
• Use fread(matriz, sizeof(int), 9, fp);
• Dois for aninhados para exibir no formato correto
c) Somar os elementos da diagonal principal a partir do arquivo
Objetivo:
Após ler a matriz, calcule e exiba a soma da diagonal principal (posição [0][0], [1][1], [2][2]).
Dicas:
• Use a estrutura de matriz após leitura
• soma += matriz[i][i];

d) Modificar um elemento específico da matriz no arquivo
Objetivo:
Altere diretamente no arquivo o valor da posição [1][2] (segunda linha, terceira coluna) para
99.
Dicas:
• Cada int tem tamanho sizeof(int)
• Use fseek para mover o cursor do arquivo para a posição correta;
• Escreva com fwrite(&novo_valor, sizeof(int), 1, fp);

e) Criar e ler uma matriz de tamanho variável
Objetivo:
Peça ao usuário o número de linhas e colunas da matriz, aloque dinamicamente, leia os
valores e grave em matriz2.dat. Em outro programa, leia e exiba os dados.
Dicas:
• Salve também o número de linhas e colunas no início do arquivo para poder reler
corretamente depois.
-----------------------------------------------------------------------------------
11 - Explorando o Cabeçalho de um Arquivo BMP
Você foi encarregado de analisar um arquivo de imagem chamado “imagem.bmp”. Seu
objetivo é escrever um programa em C que:
1. Abra o arquivo imagem.bmp em modo binário.
2. Verifique se o arquivo é realmente um arquivo BMP válido.
o Para isso, ele deve conter os dois primeiros bytes iguais a 'B' e 'M'.
3. Extraia e exiba na tela as dimensões da imagem (largura e altura), que estão
armazenadas no cabeçalho do arquivo.

Exemplo de saída esperada (arquivo válido):
Arquivo BMP válido.
Largura: 1920 pixels
Altura: 1080 pixels

Exemplo de saída esperada (arquivo inválido):
Arquivo inválido: não é um BMP.