#include <stdio.h>

extern void bsort(int arr[], size_t arr_size);
int main(void) {
    int i;
    int arr[9] = {2, 5, 1, 9, 8, 4, 3, 7, 6};
    size_t arr_size = sizeof(arr)/sizeof(arr[0]);

    printf("List View >>");
    for(i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    bsort(arr, arr_size);

    printf("Bubble List View >>");
    for(i = 0; i < arr_size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}