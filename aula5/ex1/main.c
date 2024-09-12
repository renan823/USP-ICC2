#include "item.h"

#include <stdio.h>

void bubble_sort(ITEM* vec[], int n) {
    ITEM* aux;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            if (item_get_key(vec[j]) > item_get_key(vec[j+1])) {
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j] = aux;
            }
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

    bubble_sort(vec, n);

    for (int i = 0; i < n; i++) {
        printf("%d\n", item_get_key(vec[i]));
    }

    return(0);
}