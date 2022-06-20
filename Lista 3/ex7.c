#include <stdio.h>
#include <string.h>

int main()
{

  float db[3][5], md[5], M;
  int i, k, periodo, posto;

  M = 0.0;

  for (i = 0; i < 5; i++) {
    for (k = 0; k < 3; k++) {
      printf("\nposto %d - periodo %d: ", i + 1, k + 1);
      scanf("%f", &db[k][i]);
      if (M < db[k][i]) { 
        posto = i;
        periodo = k;
        M = db[k][i];
      }
    }
    md[i] = (db[0][i] + db[1][i] + db[2][i]) / 3;
  }

  if (periodo == 0) {
    printf("\n\nO maior valor foi %f registrado pela manha no posto %i", M, posto+1);
  }
  if (periodo == 1) {
    printf("\n\nO maior valor foi %f registrado pela tarde no posto %i", M, posto+1);
  }
  if (periodo == 2) {
    printf("\n\nO maior valor foi %f registrado pela noite no posto %i", M, posto+1);
  }
  printf("\n\nMedias:");
  for (i = 0; i < 5; i++) {
    printf("\nposto %d: %f", i + 1, md[i]);
  }
}