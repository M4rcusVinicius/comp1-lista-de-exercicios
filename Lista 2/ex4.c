/*

4. Faça um algoritmo que leia um número e divida-o por dois (sucessivamente) até que o resultado seja menor que 1. Mostre o resultado da última divisão e a quantidade de divisões efetuadas.

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  float num;
  setlocale(LC_ALL, "Portuguese");

  printf("\nDigite um número: ");
  scanf("%f", &num);

  while (num > 1)
  {
    printf("\nNumero = %.1f", num); //
    num = num / 2;
  }

  printf("\nNumero final: %f", num);
  printf("\n");

  system("pause");
}