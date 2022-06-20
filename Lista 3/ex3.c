#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char texto[100] = "teste", input[100];
  int tamanho, i;

  printf("\nDigite um texto: ");
  fgets(input, 100, stdin);

  tamanho = strlen(input);

  for (i = tamanho - 1; i > 0; i--)  {
    texto[(tamanho - i) - 1] = input[i - 1];
    printf("\n\n%d: %c", (tamanho - i) - 1, input[i - 1]);
  }

  printf("\nTamanho do texto = %s \n\n", texto);
}
