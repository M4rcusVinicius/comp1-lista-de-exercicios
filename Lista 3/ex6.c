#include <stdio.h>

int main()
{

  int n[20] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20 }, impar[5][5], par[5][5];
  int i, j, imparIndex = 0, parIndex = 0, coluna, linha;

/*   for (i = 0; i < 20; i++) {
    printf("\nElemento [ %d ]: ", i);
    scanf("%d", &n[i]);
  } */

  for (j = 0; j < 20; j++) {
    if (n[j] % 2)
    {
      linha = imparIndex / 5;
      coluna = imparIndex - (linha * 5);
      impar[linha][coluna] = n[j];
      printf("\n%d - %d | %d", linha, coluna, impar[linha][coluna]);
      imparIndex++;
    } else {
      linha = parIndex / 5;
      coluna = parIndex - (linha * 5);
      par[linha][coluna] = n[j];
      printf("\n%d - %d | %d", linha, coluna, par[linha][coluna]);
      parIndex++;
    }
  }


  printf("\n\nNumeros impares = [\n\n");
  
  for (coluna = 0; coluna < 5; coluna++) {
    for (linha = 0; linha < (imparIndex / 5); linha++)
    {
      printf("%d     ", impar[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n]");

  printf("\n\nNumeros pares = [\n\n");
  
  for (coluna = 0; coluna < 5; coluna++) {
    for (linha = 0; linha < (parIndex / 5); linha++)
    {
      printf("%d     ", par[linha][coluna]);
    }
    printf("\n");
  }
  printf("\n]");


  return 0;
}
