#include <stdio.h>

extern int sumap(int num);

//FIXME: Value input
int main(void) {
    int sum = 10;
    int veri = 10 * (10 + 1) / 2;
    printf("%d %d\n", sumap(sum), veri);

    return 0;
}