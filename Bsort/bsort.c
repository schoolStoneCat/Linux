#include <stdio.h>

void bsort(int arr[], size_t arr_size) {
    int i, j, tmp;

    for (i = 0; i < arr_size - 1; i++) {
        for (j = 0; j < arr_size - 1 - i; j++) {
            if(arr[j] > arr[j + 1]) {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}