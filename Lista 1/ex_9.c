#include <stdio.h>
#include <locale.h>

int main()
{
  float m, km;
  char tp[1];

  printf("\nDigite m para converter para milhas e k para converter para kilometros: ");
  scanf("%s", &tp);

  if (tp[0] == 'm')
  {
    printf("Digite um valor em milhas: ");
    scanf("%f", &m);
    km = m * 1.609344;
    printf("Conversão: %f", km);
  }
  else
  {
    printf("Digite um valor em km: ");
     scanf("%f", &km);
    m = km / 1.609344;
    printf("Conversão: %f", m); 
  }
}