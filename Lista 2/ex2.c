/* 

2. Escreva um programa que calcule o resultado da série:
S = 1/1 + 3/2 + 5/3 + 7/4 + ... + 99/50

 */


#include <stdio.h>

int main() {
    int x = 1, y = 1, sm = 0;

    while (x <= 99) {
        if (x % 2 == 0) {
            printf("\n > Par %d", x);
        } else {
            printf("\n > Impar %d", x);
            y++;
            sm += x/y;
        }
        x++;
    }
    printf("\n Soma %d", sm);
}