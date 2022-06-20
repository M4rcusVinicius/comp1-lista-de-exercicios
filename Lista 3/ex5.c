#include <stdio.h>

int main()
{
  int a[10][10], transpose[10][10], linhas, colunas;
  printf("\nEscreva o nuero de colunas: ");
  scanf("%d", &linhas);
  printf("\nEscreva o nuero de linhas: ");
  scanf("%d", &colunas);

  printf("\nEscreva os elementos da matrix:\n");
  for (int i = 0; i < linhas; ++i)
    for (int j = 0; j < colunas; ++j)
    {
      printf("Elemento a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("\nMatriz: \n");
  for (int i = 0; i < linhas; ++i)
    for (int j = 0; j < colunas; ++j)
    {
      printf("%d  ", a[i][j]);
      if (j == colunas - 1)
        printf("\n");
    }

  for (int i = 0; i < linhas; ++i)
    for (int j = 0; j < colunas; ++j)
    {
      transpose[j][i] = a[i][j];
    }

  printf("\nTransposta:\n");
  for (int i = 0; i < colunas; ++i)
    for (int j = 0; j < linhas; ++j)
    {
      printf("%d  ", transpose[i][j]);
      if (j == linhas - 1)
        printf("\n");
    }
  return 0;
}