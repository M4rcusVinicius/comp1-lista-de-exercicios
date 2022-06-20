/*

10. Desenvolva um programa que ajude as crianças a decorar a tabuada. O programa deve selecionar uma tabuada e contabilizar erros e acertos. Se a criança tiver 3 ou menos erros, o programa deve escrever a frase "Você está de parabéns". Se a criança tiver até 5 erros, o programa deve escrever "Está bom, mas você deve estudar mais!"; e finalmente, se a criança tiver mais de 5 erros, o programa deve escrever "Você precisa estudar mais". Ao final da execução, o programa deve escrever a quantidade de erros e acertos.

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
  int m = 1, M = 0, mult = 0, ac = 0, err = 0, tr, res, num, randNumber, rendMult;

  setlocale(LC_ALL, "Portuguese");
  srand(time(NULL));

  printf("\n\nNumero de jogadas: ");
  scanf("%i", &num);

  printf("Menor número: ");
  scanf("%i", &m);
  printf("Maior número: ");
  scanf("%i", &M);
  printf("Número de multiplicadores: ");
  scanf("%i", &mult);

  for (int i = 0; i < num; i++)
  {
    randNumber = (rand() % (M - m + 1)) + m;
    rendMult = (rand() % (mult - 1 + 1)) + 1;

    res = randNumber * rendMult;
    printf("\n\n-------- Jogada %i ---------", i + 1);
    printf("\n%i X %i = ", randNumber, rendMult);
    scanf("%i", &tr);

    if (tr == res)
    {
      ac++;
      printf("Correto !!!");
    }
    else
    {
      err++;
      printf("Errado :/");
    }
  }

  printf("\n\n\nAcertos --------- %i", ac);
  printf("\nErros ----------- %i", err);

  if (err < 4)
    printf("\n\nVocê está de parabéns");
  else
    if (err < 6)
      printf("\nEstá bom, mas você deve estudar mais!");
    else
      printf("\n\nVocê precisa estudar mais");

  printf("\n\n\n");
  system("pause");
}