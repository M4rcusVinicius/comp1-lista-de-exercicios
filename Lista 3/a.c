#include <stdio.h>

int main()
{
    int i, j, linha=3, coluna=5,u ,v ;
    float matriz[3][5], mmedia=0, m1,m2,m3,m4,m5,mt;

    for(i=0; i<linha; i++) //lendo matrz
    {
        for(j=0; j<coluna; j++)
        {
            printf(" posto[%d]= ", j+1);
            scanf("%d", &matriz[i][j]);
        }
        if(mmedia< matriz[i][j])
        {
            u=i;
            v=j;
        }
    }
    m1=matriz[0][0]+matriz[1][0]+matriz[2][0];
    m2=matriz[0][1]+matriz[1][1]+matriz[2][1];
    m3=matriz[0][2]+matriz[1][2]+matriz[2][2];
    m4=matriz[0][3]+matriz[1][3]+matriz[2][3];
    m5=matriz[0][4]+matriz[1][4]+matriz[2][4];
    mt = m1+m2+m3+m4+m5;


    printf("Media posto 1: %.2f\n", m1);
    printf("Media posto 2: %.2f\n", m2);
    printf("Media posto 3: %.2f\n", m3);
    printf("Media posto 4: %.2f\n", m4);
    printf("Media posto 5: %.2f\n", m5);
    printf("Media do dia = %.2f \n", mt);

    printf("Maior Quantidade de chuva foi no posto: ");




    if(v=0)
    {
        printf("1\n");
    }
    if(v=1)
    {
        printf("2\n");
    }
    if(v=2)
    {
        printf("3\n");
    }
    if(v=3)
    {
        printf("4\n");
    }
    if(v=4)
    {
        printf("5\n");
    }


    if(u=0)
    {
        printf("Horario da manha\n");
    }
    if(u=1)
    {
        printf("Horario da tarde\n");
    }
    if(u=2)
    {
        printf("Horario da noite\n");
    }

}
