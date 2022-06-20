#include <stdio.h>
#include <locale.h>

int main()
{
  int num, m, c, d, u;

  printf("\nDigite um numero de ate 4 digitos:\n");
  scanf("%d", &num);
  printf("\n");

  m = (num - num % 1000) / 1000;
  c = ((num - num % 100) - m*1000)/100;
  d = ((num - num % 10) - m*1000 - c*100)/10;
  u = num - m*1000 - c*100 - d*10;

  printf("Milhar: %d\n", m);
  printf("Centena: %d\n", c);
  printf("Dezena: %d\n", d);
  printf("Unidade: %d\n", u);
}