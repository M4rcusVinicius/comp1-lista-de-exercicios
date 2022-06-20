/* 

5. O cálculo do coeficiente de rendimento do aluno na UTFPR é dado pela fórmula:

CR = somatória (CH * NF) / (10 * somatória CH)

Onde:
CH = carga horária da disciplina
NF = nota final na disciplina

Elabore o programa onde o aluno possa digitar as diversas cargas horárias e as notas finais das disciplinas cursadas no semestre e este informe o coeficiente de rendimento (CR) do aluno. O usuário deverá informar a quantidade de disciplinas que estão sendo cursadas no semestre.

 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
  float num, ch, nf, sum, sumCh, i;

  setlocale(LC_ALL, "Portuguese");

  printf("\nDigite a quantidade de disciplinas: ");
  scanf("%f", &num);

  for (i=0; i<num; i++)
  {
    printf("\nDigite o CH da disciplina %.0f: ", i+1);
    scanf("%f", &ch);
    printf("Digite a NF da disciplina %.0f: ", i+1);
    scanf("%f", &nf);
    sum += (ch*nf);
    sumCh += ch;
  }

  printf("\nCoeficiente de rendimento do aluno: %.2f", num);
  printf("\n");
  system("pause");
}