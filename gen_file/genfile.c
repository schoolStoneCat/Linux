#include "genfile.h"
#include "wrapper.h"

void gen_file(char *filename, char *astr) {
    int fd, res;
    char mybuf[256];

    if(astr == NULL) {
        fprintf(stderr, "//ERROR >> String Value error.\n");
    }

    fd = Wopen(filename, O_RDWR | O_CREAT, 0166);
    Wwrite(fd, astr, strlen(astr)+1);

    Wlseek(fd, 0, SEEK_SET);
    res = Wread(fd, mybuf, 16);
    printf("The read size is %d\n", res);

    Wclose(fd);
}