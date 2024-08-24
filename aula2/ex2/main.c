#include <stdio.h>

int soma(int vet[], int n);

int main(void) {
    int vet[] = { 6 };
    int n = 1;

    int s = soma(vet, n);

    printf("%d\n", s);

    return(0);
}

int soma(int vet[], int n) {
    if (n == 1) {
        return(vet[0]);
    }

    return(vet[n-1] + soma(vet, n-1));
}
