#include <stdio.h>
#include <locale.h>

int main()
{
  float n1, n2, n3, med;
  int faltas, aulas, pr;

  printf("\nDigite a nota de cada prova no formato 0.00:\n");
  printf("Prova 1: ");
  scanf("%f", &n1);
  printf("Prova 2: ");
  scanf("%f", &n2);
  printf("Prova 3: ");
  scanf("%f", &n3);

  printf("\nDigite o numero de aulas dadas:\n");
  scanf("%d", &aulas);

  printf("\nDigite o numero de faltas:\n");
  scanf("%d", &faltas);

  med = (n1 + n2 + n3) / 3;
  printf("Nota total: %f\n", med);

  pr = (faltas * 100) / aulas;
  printf("Porcentagem de faltas: %d\n", pr);


  if (med >= 6 && pr <= 25)
  {
    printf("Aprovado");
  }
  else
  {
    printf("Reprovado");
  }
}