#include "genfile.h"

int main() {
    mode_t mask_org;
    char *filename = "temp.txt";

    mask_org = umask(677);
    gen_file(filename, "This is a test files.");

    //ADD

    unlink(filename);
    umask(mask_org);

    return(0);
}