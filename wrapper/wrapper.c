#include "wrapper.h"

int Wopen(const char *pathname, int flags, mode_t mode) {
    int fd = open(pathname, flags, mode);

    if(fd == -1) {
        fprintf(stderr, "//ERROR >> Open Error.\n");
        exit(0);
    }
    else {
        fprintf(stderr, "Success to open file\n");
    }
    return (fd);
}

ssize_t Wread(int fildes, void *buf, size_t nbyte) {
    int res = read(fildes, buf, nbyte);

    if(res < 0) {
        if(errno == EINTR) {
            fprintf(stderr, "//ERROR >> read is stopped by signal.\n");
        }
        else if (errno == ENOENT) {
            fprintf(stderr, "//ERROR >> There is no file.\n");
        }
        else if (res < nbyte) {
            fprintf(stderr, "//ERROR >> read byte error.\n");
        }
        else {
            fprintf(stderr, "%s.\n", strerror(errno));
        }
        exit(1);
    }
    return (res);
}

int Wclose(int fildes) {
    int fd = close(fildes);

    if (fd == -1){
        fprintf(stderr, "//ERROR >> Fail to close file\n");
    }
    else {
        fprintf(stderr, "Success to close file.\n");
    }

    return (fd);
}

off_t Wlseek(int fildes, off_t offset, int whence) {
    off_t newpos;
    newpos = lseek(fildes, offset, SEEK_SET);

    if (newpos < 0) {
        fprintf(stderr, "//ERROR >> lseek error.\n");
        exit(1);
    }

    return (newpos);
}

ssize_t Wwrite(int fildes, const void *buf, size_t nbyte) {
    ssize_t wd;
    wd = write(fildes, buf, nbyte);

    if (wd < 0) {
        if (errno == EINVAL) {
            fprintf(stderr, "//ERROR >> write file error.\n");
            exit(1);
        }
        else if (errno == EFAULT) {
            fprintf(stderr, "//ERROR >> write buf error.\n");
            exit(1);
        }
        else if (errno == EBADF) {
            fprintf(stderr, "//ERROR >> cannot write.\n");
            exit(1);
        }
        else {
            fprintf(stderr, "//ERROR >> write error.\n");
            exit(1);
        }
    }

    return (wd);
}