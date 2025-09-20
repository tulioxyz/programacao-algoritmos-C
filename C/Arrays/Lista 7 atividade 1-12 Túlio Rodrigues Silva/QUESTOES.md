# Lista 07

1. Preencher e exibir uma matriz 2x3
• Crie uma função para preencher a matriz com valores digitados.
• Crie uma função para imprimir a matriz no formato de linhas e colunas.
• No main(): declare a matriz, chame a função de preenchimento e, em seguida, a função
de impressão para testar se os valores foram corretamente armazenados e exibidos.
-----------------------------------------------------------------------------------
2. Preencher a matriz com zeros
• Crie uma função que percorra toda a matriz e atribua zero a todas as posições.
• Crie uma função para imprimir a matriz.
• No main(): declare a matriz, chame a função que zera a matriz e depois a de impressão
para verificar se todos os valores são zero.
-----------------------------------------------------------------------------------
3. Preencher a matriz com a soma dos índices
• Crie uma função que preencha a matriz onde o valor de cada posição [i][j] seja i + j.
• Crie uma função para exibir a matriz.
• No main(): chame a função de preenchimento e depois a função de impressão para
conferir se a soma dos índices está correta.
-----------------------------------------------------------------------------------
4. Calcular a soma de todos os elementos da matriz
• Crie uma função para preencher a matriz.
• Crie uma função que percorra a matriz e retorne a soma de todos os elementos.
• Crie uma função para imprimir a matriz.
• No main(): preencha a matriz, imprima e depois mostre na tela o resultado da soma
calculada pela função.
-----------------------------------------------------------------------------------
5. Encontrar o maior valor da matriz
• Crie uma função para preencher a matriz.
• Crie uma função que percorra a matriz e retorne o maior valor encontrado.
• Crie uma função para imprimir a matriz.
• No main(): preencha a matriz, imprima e mostre na tela qual foi o maior valor encontrado.
-----------------------------------------------------------------------------------
6. Contar quantos valores são pares na matriz
• Crie uma função para preencher a matriz.
• Crie uma função que percorra a matriz, conte e retorne a quantidade de números pares.
• Crie uma função para imprimir a matriz.
• No main(): chame a função de preenchimento, imprima e exiba na tela a quantidade de
números pares encontrados.
-----------------------------------------------------------------------------------
7. Gerar a matriz transposta (3x2 → 2x3)
• Crie uma função para preencher a matriz original.
• Crie uma função que gere e retorne a matriz transposta.
• Crie uma função para imprimir qualquer matriz de qualquer dimensão (adaptável).
• No main(): preencha a matriz original, gere a transposta e imprima as duas matrizes para
comparar.
-----------------------------------------------------------------------------------
8. Calcular a soma dos elementos de cada linha
• Crie uma função para preencher a matriz.
• Crie uma função que percorra a matriz e calcule a soma dos elementos de cada linha,
mostrando a soma de cada uma.

• Crie uma função para imprimir a matriz.
• No main(): preencha, imprima e mostre a soma de cada linha.
-----------------------------------------------------------------------------------
9. Calcular a soma dos elementos de cada coluna
• Crie uma função para preencher a matriz.
• Crie uma função que percorra a matriz e calcule a soma dos elementos de cada coluna,
exibindo a soma de cada uma.
• Crie uma função para imprimir a matriz.
• No main(): preencha, imprima e mostre a soma de cada coluna.
-----------------------------------------------------------------------------------
10. Preencher uma matriz identidade (3x3)
• Crie uma função que preencha a matriz como identidade (1 na diagonal principal e 0 nas
demais posições).
• Crie uma função para imprimir a matriz.
• No main(): preencha a matriz identidade e imprima para verificar se a matriz foi
corretamente construída.
-----------------------------------------------------------------------------------
11. Copiar os elementos de um vetor para outro
• Crie uma função para preencher um vetor com valores digitados.
• Crie uma função que copie os valores de um vetor para outro.
• Crie uma função para imprimir um vetor.
• No main(): preencha o vetor de origem, chame a função que copia os dados para o vetor
de destino e, em seguida, imprima ambos os vetores para verificar se a cópia foi realizada
corretamente.
-----------------------------------------------------------------------------------
12. Desafio — Jogo da Velha
Descrição do problema:
Implemente um jogo da velha (3x3), onde dois jogadores jogam alternadamente. O programa
deve:
• Mostrar o tabuleiro após cada jogada.
• Verificar se algum jogador venceu ou se deu empate.
• Após o término da partida, perguntar se deseja jogar novamente.

Regras:
• O tabuleiro é uma matriz 3x3.
• Cada posição pode estar vazia (' '), marcada com 'X' ou 'O'.
• O jogo alterna entre os dois jogadores.
• Vence quem alinhar três símbolos na horizontal, vertical ou diagonal.
• Se todas as posições forem preenchidas e ninguém vencer, o jogo termina em empate.

O que fazer:
• Utilizar funções para dividir as responsabilidades do programa, como:
o void inicializarTabuleiro(char tabuleiro[3][3]);
o void imprimirTabuleiro(char tabuleiro[3][3]);
o void realizarJogada(char tabuleiro[3][3], char jogador);
o char verificarVencedor(char tabuleiro[3][3]);
o int tabuleiroCompleto(char tabuleiro[3][3]);
• Controlar no main() o fluxo do jogo, incluindo a opção de jogar novamente após uma
partida terminar.
O programa deve executar assim:
1. Inicializa o tabuleiro vazio.
2. Alterna entre os jogadores 'X' e 'O' pedindo que informem a linha e a coluna da jogada.
3. Após cada jogada:
o Exibe o tabuleiro atualizado.
o Verifica se há vencedor ou empate.
4. Se houver um vencedor ou empate:
o Exibe a mensagem final ("Jogador X venceu!" ou "Empate!").
o Pergunta: "Deseja jogar novamente? (1 - Sim | 0 - Não)".
o Se escolher sim, o jogo reinicia.

Roteiro de implementação sugerido:
1. Criar uma função para inicializar o tabuleiro com espaços ' '.
2. Criar uma função para imprimir o tabuleiro de forma legível no terminal.
3. Criar uma função para que o jogador informe a linha e a coluna da jogada, garantindo
que:

o A posição esteja dentro dos limites.
o A posição não esteja ocupada.
4. Criar uma função para verificar o vencedor, verificando:
o Três iguais na mesma linha, coluna ou diagonal.
o Retornar 'X' ou 'O' se houver vencedor ou ' ' se não houver.
5. Criar uma função para verificar se o tabuleiro está cheio, retornando verdadeiro se não
houver mais jogadas possíveis (empate).
6. Controlar o fluxo no main():
o Enquanto não houver vencedor nem empate, alternar entre os jogadores e solicitar
jogadas.
o Ao final da partida, perguntar se deseja jogar novamente.