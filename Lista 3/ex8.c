#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char texto[100], input[100];
  int tamanho, i, correct = 1;

  printf("\nDigite um texto: ");
  fgets(input, 100, stdin);

  tamanho = strlen(input);

  printf("\nTamanho: %d", tamanho / 2);

  strncpy(texto, input, 100);
  for (i = tamanho / 2; i < tamanho; i++)
  {
    texto[i] = '_';
  }
  printf("\nQual e a palavra original ?");
  printf("\nDica: %s\n\n", texto);

  while (correct)
  {
    printf("\nTentativa: ");
    fgets(texto, 100, stdin);

    correct = 0;

    for (i = 0; i < tamanho; i++)
    {
      if (texto[i] != input[i])
      {
        printf("\nTente outra vez");
        correct = 1;
        break;
      }
    }

    if (correct == 0)
    {

      printf("\nParabens, voce acertou!!!\n");
    }
  }
}
