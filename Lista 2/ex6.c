/*

6. Construa um programa que tenha um laço (loop) para ler o consumo de energia elétrica em KWh de uma residência mês a mês e fornecer a média, o maior consumo e o menor consumo, onde o usuário deverá informar a quantidade de meses do intervalo a ser calculado.

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  int meses, i;
  float M = 0, m, c, media = 0;
  setlocale(LC_ALL, "Portuguese");

  printf("Intervalo de tempo em meses: ");
  scanf("%i", &meses);

  for (i = 0; i < meses; i++)
  {
    printf("\nDigite o consumo do mês %i em (KWh): ", i + 1);
    scanf("%f", &c);
    media = c;
    if (i == 0)
      m = c;
    if (c < m)
      m = c;
    if (c > M)
      M = c;
  }

  media = media / meses;

  printf("\nMaior consumo ---------- %.2f", M);
  printf("\nMenor consumo ---------- %.2f", m);
  printf("\nMédia ------------------ %.2f", m);
  printf("\n");

  system("pause");
}