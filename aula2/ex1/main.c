#include <stdio.h>

int maximo(int vet[], int n);

int main(void) {
    int vet[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int n = 10;

    int ma = maximo(vet, n);

    printf("%d\n", ma);

    return(0);
}

int maximo(int vet[], int n) {
    if (n == 1) {
        return(vet[0]);
    }

    int max = maximo(vet, n-1);
    
    return (max > vet[n-1]) ? max : vet[n-1];
}
