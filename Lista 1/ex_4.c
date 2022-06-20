#include <stdio.h>
#include <locale.h>

int main()
{
  int num, h, m, s;

  printf("\nDigite o tempo em segundos:\n");
  scanf("%d", &num);
  printf("\n");

  s = num % 60;
  m = ((num - s) / 60) % 60;
  h = ((num - s) / 60) - m;

  printf("Tempo -- %d:%d:%d\n", h, m, s);
}