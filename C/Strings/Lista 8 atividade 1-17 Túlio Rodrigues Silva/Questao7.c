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

int main()
{
    char palavra[20];

    printf("Insira uma palavra: ");
    fgets(palavra, 50, stdin);

    tranformarParaMaiuscula(palavra);
    printf("%s", palavra);

    system("pause");
    return 0;
}