#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "my_assert.h"

int main(int argc, char *argv[])
{
    FILE *f;

    my_assert(argc >= 2);

    if ((f = fopen(argv[1], "r")) == NULL) {
        perror("fopen");
        exit(1);
    }

    printf("Open a file \"%s\".\n", argv[1]);

    fclose(f);
    return 0;
}
