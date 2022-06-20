#include <stdio.h>
#include <locale.h>

int main()
{
  int x, y, a, b, c, d, e, f;

  printf("ax + by = c\n");
  printf("dx + ey = f\n\n\n");

  printf("\nDigite o valor de a: ");
  scanf("%d", &a);

  printf("\nDigite o valor de b: ");
  scanf("%d", &b);

  printf("\nDigite o valor de c: ");
  scanf("%d", &c);

  printf("\nDigite o valor de d: ");
  scanf("%d", &d);

  printf("\nDigite o valor de e: ");
  scanf("%d", &e);

  printf("\nDigite o valor de f: ");
  scanf("%d", &f);

  x = (c*e - b*f) / (a*e - b*d);
  y = (a*f - c*d) / (a*e - b*d);

  printf("\nValor de x: %d", x);
  printf("\nValor de y: %d", y);

}