#include <stdio.h>
#include <locale.h>

int main()
{
  float alt, ps, pesoIdeal;
  char sx[1];

  printf("\nDigite h para home e m para mulher: ");
  scanf("%s", &sx);
  printf("Digite a altura: ");
  scanf("%f", &alt);
  printf("Digite o peso: ");
  scanf("%f", &ps);

  if (sx[0] == 'h')
  {
    pesoIdeal = 72.7 * alt - 58;
    printf("Peso ideal (h): %f", pesoIdeal);
  } else {
    pesoIdeal = 62,1 * alt - 44,7;
    printf("Peso ideal (m): %f", pesoIdeal);
  }
}