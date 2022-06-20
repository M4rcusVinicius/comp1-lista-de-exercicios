#include <stdio.h>
#include <string.h>

int main()
{
  char texto[20], vogal;
  int i, tamanho;

  printf("Texto: ");
  scanf("%s", &texto);
  getchar();
  printf("Vogal: ");
  scanf("%c", &vogal);
  tamanho = strlen(texto);
  printf("tamanho: %d", tamanho);

  for (i = 0; i < tamanho; i++)
  {
    switch (texto[i])
    {
    case 'a':
      texto[i] = vogal;
      break;
    case 'e':
      texto[i] = vogal;
      break;
    case 'i':
      texto[i] = vogal;
      break;
    case 'o':
      texto[i] = vogal;
      break;
    case 'u':
      texto[i] = vogal;
      break;
    case 'A':
      texto[i] = vogal;
      break;
    case 'E':
      texto[i] = vogal;
      break;
    case 'I':
      texto[i] = vogal;
      break;
    case 'O':
      texto[i] = vogal;
      break;
    case 'U':
      texto[i] = vogal;
      break;
      break;
    }
  }
  printf("\n%s", texto);
}