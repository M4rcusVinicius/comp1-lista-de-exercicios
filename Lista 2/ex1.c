/* 

1. Elabore um programa em linguagem C que some todos os números ímpares compreendidos entre 101 e 195.

*/

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
    int x1, y1, x2, y2, d;

    printf("\n\n\n");
    printf("\nDIgite as coordenadas do ponto 1 no formato x:y\n");
    scanf("%d:%d", &x1, &y1);

    printf("\nDIgite as coordenadas do ponto 2 no formato x:y\n");
    scanf("%d:%d", &x2, &y2);

    d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    printf("\n\n"); // quebras de linha
    printf("A distância entre os 2 pontos é = %d", d);
}