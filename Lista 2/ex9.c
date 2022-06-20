/*

Uma empresa adota a flexibilidade de horário para os seus estagiários. Assim sendo, o estagiário pode faltar um dia para estudar para uma prova, devendo repor este horário até no máximo no mês subsequente. Desenvolva um programa para ler a hora de entrada e de saída do estagiário em cada dia, calcular o número de horas trabalhadas acumuladas em um mês e informar a quantidade de horas que o estagiário tem sobrando ou a quantidade de horas que ele terá que repor. Importante: a quantidade de dias úteis no mês deve ser informada pelo usuário (e será utilizada no loop).

*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int FormatTime(int sec)
{
  int h, m, s;
  s = sec % 60;
  m = ((sec - s) % 60) / 60;
  h = (sec - m - s) / 3600;
  printf("\nTotal de horas trabalhadas: %d:%d:%d", h, m, s);
}

int ValidateTime(int hh, int mm, int ss)
{
  int ret = 0;
  if (hh > 24) ret = 1;
  if (mm > 60) ret = 1;
  if (ss > 60) ret = 1;
  return ret;
}

int WorkTimeDay()
{
  int ret = 0, hour1 = 0, min1 = 0, sec1 = 0, hour2 = 0, min2 = 0, sec2 = 0, sum;
  do
  {
    setlocale(LC_ALL, "Portuguese");
    char string[100] = {0};

    printf("\nDigite o horário de entrada no formato \"hh:mm:ss\": ");
    fgets(string, 100, stdin);
    sscanf(string, "%d:%d:%d", &hour1, &min1, &sec1);

    ret = ValidateTime(hour1, min1, sec1);
    if (ret)
      printf("\nTempo inválido, tente novamente\n");
  } while (ret);

  do
  {
    setlocale(LC_ALL, "Portuguese");
    char string[100] = {0};

    printf("Digite o horário de de saída no formato \"hh:mm:ss\": ");
    fgets(string, 100, stdin);
    sscanf(string, "%d:%d:%d", &hour2, &min2, &sec2);

    ret = ValidateTime(hour2, min2, sec2);
    if (ret)
      printf("\nTempo inválido, tente novamente\n");
  } while (ret);

  sum = (((hour2 - hour1) * 60 
    + min2 - min1)*60
    + sec2 - sec1);

  if (sum < 0) {
    printf("É imossível trabalhar um numero negativo de horas");
    return WorkTimeDay();
  }

  return sum;
}

int main()
{
  int workTime, i = 0, days, total = 0;

  printf("\nDigite o número de dis úteis: ");
  scanf("%i", &days);
  getchar();

  for (i; i < days; i++) {
    printf("\n---------------------- Dia %i ---------------------", i + 1);
    workTime = WorkTimeDay();
    printf("Segundos trabalhados hoje: %d", workTime);
    total += workTime;
    printf("\nTempo total trabalhado: %d\n", total);
  }

  FormatTime(total);
  printf("\n");
  system("pause");
  return 0;
}

