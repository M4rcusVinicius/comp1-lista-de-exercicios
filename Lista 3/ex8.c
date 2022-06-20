#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
  char texto[100];
  int tamanho, i;

  printf("\nDigite um texto: ");
  fgets(texto, 100, stdin);

  tamanho = strlen(texto);

  printf("Texto registrado: %s", texto);
  printf("Tamanho: %d", tamanho / 2);

  for (i = tamanho / 2; i < tamanho; i++) {
    texto[i] = '_';
  }
  printf("\n%s", texto);
}
