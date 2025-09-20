#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int contarVogais(char s[]){
    int vogais = 0, tamanho = strlen(s);
    for(int i=0; i<tamanho; i++){
        if(s[i]==65 || s[i]==69 || s[i]==73 || s[i]==79 || s[i]==85){
            vogais++;
        } else {
            vogais = vogais;
        }
    }
    return vogais;
}

int main()
{
    char nome[30];

    printf("Insira um nome: ");
    fgets(nome, 30, stdin);
    int tamanho = strlen(nome);

    for(int i = 0; i < tamanho; i++){
        if(nome[i] >= 'a' && nome[i] <= 'z'){
            nome[i] -= 32;
        }
    }

    printf("VOGAIS: %d\n", contarVogais(nome));

    system("pause");
    return 0;
}