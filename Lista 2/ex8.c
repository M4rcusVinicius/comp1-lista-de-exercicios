/*

8. Construa um programa para ler uma série de 20 números, calcular a média destes e mostrar qual é o maior valor e também o segundo maior valor.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
  float M = 0, M2 = 0, md = 0, c = 10, count = 0;

  setlocale(LC_ALL, "Portuguese");

  while (count < 20)
  {
    printf("\nDigite o %.0f número: ", count + 1);
    scanf("%f", &c);

    md += c;
    count++;
  }

  md = md / 20;

  printf("\n\nMédia: %.2f", md);
  printf("\n");
  system("pause");
}