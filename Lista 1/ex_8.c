#include <stdio.h>
#include <locale.h>

int main()
{
  int num, m, c, s;

  printf("\nDigite o tempo em minutos: ");
  scanf("%d", &num);

  m = num * 45;
  s = m % 302;
  c = m / 302;

  printf("\nForam produzidos %dm", m);
  printf("\nNumero de caixas: %d", c);
  printf("\nMetros de cabo restantes %d", s);
}