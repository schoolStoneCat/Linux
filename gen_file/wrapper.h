#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int Wopen(const char *pathname, int flags, mode_t mode);
ssize_t Wread(int fildes, void *buf, size_t nbyte);
int Wclose(int fildes);
off_t Wlseek(int fildes, off_t offset, int whence);
ssize_t Wwrite(int fildes, const void *buf, size_t nbyte);