/*

7. Faça um programa que sorteie um número aleatório entre 0 e 500 e pergunte ao usuário qual é o "número mágico". O programa deverá indicar se a tentativa efetuada pelo usuário é maior ou menor que o número mágico e contar o número de tentativas. Quando o usuário conseguir acertar o número o programa deverá classiﬁcar o usuário como:
a) De 1 a 3 tentativas: muito sortudo;
b) De 4 a 6 tentativas: sortudo;
c) De 7 a 10 tentativas: normal;
d) Mais de 10 tentativas: azarado.

Para gerar números aleatórios use a função rand(). No caso do exercício, queremos números aleatórios compreendidos entre 0 e 500, portanto, "% 500" define o limite.

numero = rand() % 500;

Para evitar que a sequência randômica comece sempre igual, usamos a função time para gerar números aleatórios a partir do relógio interno do computador. Note que é necessário incluir a biblioteca "time.h" (coloque #include <time.h> no início). Então fica:

srand(time(NULL));
numero = rand() % 500;


*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main()
{
  int num, userTry, count=0;

  setlocale(LC_ALL, "Portuguese");

  srand(time(NULL));
  num = rand() % 500;

  do
  {
    printf("\nDigite um numero: ");
    scanf("%i", &userTry);

    if (userTry > num)
      printf("\nTente um pouco menos");
    if (userTry < num)
      printf("\nTente um pouco mais");

    count++;
  } while (userTry != num);

  if (count < 4)
    printf("\nMuito sortudo");
  else 
    if (count < 7)
      printf("\nSortudo");
    else
      if (count < 10)
        printf("\nNormal");
      else
        printf("\aAzarado");

  printf(" - Numero de tentativas = %i", count);
  printf("\n");
  system("pause");
}