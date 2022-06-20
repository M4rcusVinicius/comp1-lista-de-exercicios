/* 

3. Escreva um programa em linguagem C para ler um número e mostrar o seu fatorial.

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  float num, fat;
  setlocale(LC_ALL, "Portuguese");

  printf("\nDigite um número: ");
  scanf("%f", &num);

  fat = num;

  while (fat > 1)
  {
    fat--;
    num = num * fat;
  }

  printf("Fatorial: %.2f", num);
  printf("\n");

  system("pause");
}