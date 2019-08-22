#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
     * Qual pacote é mais pesado? Faça um programa que receba o
     * peso de dois pacotes e em seguida exiba apenas o peso do
     * pacote mais pesado.
    */

    float pesoPacote1, pesoPacote2;

    printf("\nInforme o peso do primeiro pacote: ");
    scanf("%f", &pesoPacote1);
    printf("\nInforme o peso do segundo pacote: ");
    scanf("%f", &pesoPacote2);

    if(pesoPacote1 > pesoPacote2){
        printf("\nO pacote 1 tem o peso de %0.2f kilos\n", pesoPacote1);
    } else if(pesoPacote1 == pesoPacote2){
        printf("\nOs dois pacote tem o mesmo peso\n");
    } else {
        printf("\nO pacote 2 tem o peso de %0.2f kilos\n", pesoPacote2);
    }
    return 0;
}
