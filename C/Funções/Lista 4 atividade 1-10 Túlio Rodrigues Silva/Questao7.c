/*7. Implemente a função long int n_segundos(int n_horas) que retorna a
quantidade de segundos correspondente a n_horas.*/

#include <stdio.h>
#include <stdlib.h>

long int nSegundos (int nHoras){
    return nHoras * 60;
}

int main()
{

    int nHoras;

    printf("Insira as horas para saber quantos segundos ha: ");
    scanf("%d", &nHoras);

    printf("%ld segundos\n", nSegundos(nHoras));


    system("pause");
    return 0;
}