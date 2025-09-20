/*Solicite ao usuário uma única letra e determine se é uma vogal (A, E, I, O, U maiúsculas ou minúsculas) ou consoante. Utilize switch/case 
para resolver.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
   
    printf("Insira uma letra: ");
    scanf("%c", &letra);

    switch (letra)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("""%c"" e uma vogal maiuscula!\n\n", letra);
        break;
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("""%c"" e uma vogal minuscula!\n\n", letra);
        break;
    case 'b':
    case 'c':
    case 'd':
    case 'f':
    case 'g':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 't':
    case 'v':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
        printf("""%c"" e uma consoante minuscula!\n\n", letra);
        break;
    case 'B':
    case 'C':
    case 'D':
    case 'F':
    case 'G':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
        printf("""%c"" e uma consoante maiuscula!\n\n", letra);
        break;
    default:
        printf("ERRO: apenas letras!\n\n");
        break;
    }
    
    system("pause");
    return 0;    
}