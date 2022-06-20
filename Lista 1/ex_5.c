#include <stdio.h>
#include <locale.h>

int main()
{
  float n1, n2, n3, med;

  printf("\nDigite a nota de cada prova no formato 0.00:\n");
  printf("Prova 1: ");
  scanf("%f", &n1);
  printf("Prova 2: ");
  scanf("%f", &n2);
  printf("Prova 3: ");
  scanf("%f", &n3);

  med = (n1 + n2 + n3) / 3;
  printf("Nota total: %f\n", med);

  if (med >= 6) {
    printf("Aprovado");
  } else {
    printf("Reprovado");
  }

}