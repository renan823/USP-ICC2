#include <stdio.h>
#include <stdlib.h>

long int fatorial(int n);

int main (void) {

    printf("%ld\n", fatorial(4));

    return(EXIT_SUCCESS);
}

long int fatorial(int n) {
    int result = 1;

    for(int i = 2; i <= n; i++) {
        result *= i;
    }

    return(result);
}