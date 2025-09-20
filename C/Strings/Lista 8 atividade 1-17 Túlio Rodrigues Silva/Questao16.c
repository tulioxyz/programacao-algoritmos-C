#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void inverterString(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;

    while(i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main()
{
    char palavra[30];

    printf("Insira uma palavra para inverter: ");
    fgets(palavra, 30, stdin);

    inverterString(palavra);

    printf("%s\n", palavra);

    system("pause");
    return 0;
}