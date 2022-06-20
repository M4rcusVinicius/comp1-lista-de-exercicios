#include <stdio.h>

int main () {

    int n[ 20 ], impar[ 20 ], par[ 20 ];
    int i,j, imparIndex = 0, parIndex = 0;

    for ( i = 0; i < 20; i++ ) {
        printf("\nElemento [ %d ]: ", i);
        scanf("%d", &n[ i ]);
    }

    for (j = 0; j < 20; j++ ) {
        if (n [j] % 2) {
            impar[ imparIndex ] = n[ j ];
            imparIndex++;
        } else {
            par[ parIndex ] = n[ j ];
            parIndex++;
        }
    }

    printf("\nNumeros pares = [");
    for (j = 0; j < parIndex; j++ ) {
        printf("\n[%d]: %d", j, par[ j ]);
    }
    printf("\n]");

    printf("\nNumeros Impares = [");
    for (j = 0; j < imparIndex; j++ ) {
        printf("\n[%d]: %d", j, impar[ j ]);
    }
    printf("\n]");

    return 0;
}


