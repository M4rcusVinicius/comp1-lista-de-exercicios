#include <stdio.h>
#include <locale.h>

int main()
{
  float ind;

  printf("\nDigite o índice de poluição medido: ");
  scanf("%f", &ind);

  if (ind < 0.3) 
  {
    printf("\n Indice de poluição aceitável");
  } else if (ind < 0.4) 
  {
    printf("\n Indústrias do primeiro grupo devem suspender suas atividades");
  } else if (ind < 0.5) 
  {
    printf("\n Indústrias do primeiro e do segundo grupo devem suspender suas atividades");
  } else {
    printf("\n Todas as indústrias devem suspender suas atividades");
  }

}