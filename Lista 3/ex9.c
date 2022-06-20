#include <stdio.h>
 
int main(void)
{
    int vetor[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(vetor) / sizeof(vetor[0]);
    int v[n];
 
    for (int i = 0; i < n; i++) {
        v[n - 1 - i] = vetor[i];
    }
 
    for (int i = 0; i < n; i++) {
        vetor[i] = v[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
 
    return 0;
}

