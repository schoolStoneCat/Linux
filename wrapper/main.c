#include "wrapper.h"

int main(void)
{
    int fd, res;
    char mybuf[256];
    char inputbuf[16] = "1234567890123456";
    
    fd = Wopen("data1.txt", O_RDWR | O_CREAT, 0777);
    res = Wread(fd, mybuf, 16);
    printf("The read size is %d\n", res);

    if (res == 0) {
        Wwrite(fd, inputbuf, sizeof(inputbuf));

        printf("write 16 byte into data1 files.\n");
        Wlseek(fd, 0, SEEK_SET);
        res = Wread(fd, mybuf, 16);
        printf("The read size is %d\n", res);
    }

    Wclose(fd);
    return(0);
}