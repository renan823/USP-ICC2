#include "item.h"

#include <stdio.h>

int binary_search(ITEM* vec[], int size, int target) {
	int bottom = 0;
	int top = size;
	int middle;

    while (1) {
        if (bottom > top) {
            return(-1);
        }

        middle = (int) (bottom + top) / 2;
        if (item_get_key(vec[middle]) == target) {
            return(middle);
        }

        if (item_get_key(vec[middle]) > target) {
            top = middle - 1;
        } else {
            bottom = middle + 1;
        }
    }
}

int main(void) {
    int n = 6;

    ITEM* vec[n];

    vec[0] = item_create(10, NULL);
    vec[1] = item_create(25, NULL);
    vec[2] = item_create(28, NULL);
    vec[3] = item_create(79, NULL);
    vec[4] = item_create(83, NULL);
    vec[5] = item_create(90, NULL);

    int target = 99; //chave procurada

    int res;

    res = binary_search(vec, n, target);
    if (res > -1) {
        printf("Encontrado na posição: %d\n", res);
    } else {
        printf("Não encontrado!\n");
    }

    return(0);
}