#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tranformarParaMaiuscula (char string[]){
    int tamanho = strlen(string);
    for(int i =  0; i<tamanho; i++){
        if(string[i] >= 'a' && string[i] <= 'z'){
            string[i] -= 32;
        }
    }
}

void tranformarParaMinuscula (char string[]){
    int tamanho = strlen(string);
    for(int i =  0; i<tamanho; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += 32;
        }
    }
}

int contarLetras (char string[]){
    int acumulador = 0, tamanho = strlen(string);
    for(int i = 0; i<tamanho; i++){
        if (string[i] == ' ' || string[i] == '\n'){
            acumulador = acumulador;
        } else {
            acumulador++;
        }
    }
    return acumulador;
}

int main()
{
    char palavra[50];
    int opcao;

    printf("Digite uma palavra//nome: ");
    fgets(palavra, 50, stdin);

    while(1){
        printf("\n\n\t---MENU DE STRINGS---\n\n");
        printf("1 -> Digitar nova string\n");
        printf("2 -> Exibir em maiusculas\n");
        printf("3 -> Exibir em minusculas\n");
        printf("4 -> Contar letras\n");
        printf("5 -> Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("Digite a sua palavra: ");
            scanf("%s", palavra);
            break;
        case 2:
            tranformarParaMaiuscula(palavra);
            printf("%s", palavra);
            break;
        case 3:
            tranformarParaMinuscula(palavra);
            printf("%s", palavra);
            break;
        case 4: 
            printf("Sua palavra tem %d letras\n", contarLetras(palavra));
            break;
        case 5:
            return 0;
        default:
            printf("ERRO: Opcao invalida, tente novamente\n");
            break;
        }
    }

    system("pause");
    return 0;
}