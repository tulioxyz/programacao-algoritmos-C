#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void tranformarParaMinuscula (char string[]){
    int tamanho = strlen(string);
    for(int i =  0; i<tamanho; i++){
        if(string[i] >= 'A' && string[i] <= 'Z'){
            string[i] += 32;
        }
    }
}

int main()
{
    char palavra[20];

    printf("Insira uma palavra: ");
    fgets(palavra, 50, stdin);

    tranformarParaMinuscula(palavra);
    printf("%s", palavra);

    system("pause");
    return 0;
}