#include <stdio.h>
#include <string.h>
#include <stdlib.h>

main()
{
    char texto[100];
    char vogais[] = "aeiouAEIOU";
    char consoantes[] = "bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
    int tamanho, i, k, isVogal, isConsoante, c = 0, v = 0;

    printf("Digite um texto: ");
    fgets(texto, 100, stdin);

    tamanho = strlen(texto);

    for (i = 0; i < tamanho - 1; i++) {
        isVogal = 0;
        isConsoante = 0;
        for (k = 0; k < 10; k++) {
            if (vogais[ k ] == texto[ i ]) {
                isVogal = 1;
                v++;
        }
        }
        for (k = 0; k < 42; k++) {
            if (consoantes[ k ] == texto[ i ]){
                isConsoante = 1;
                c++;
            }
        }
    }

    printf("\n\nNumero de vogais: %d", v);
    printf("\nNumero de consoantes: %d", c);


    printf("\nTamanho do texto = %d \n\n", tamanho);

}
