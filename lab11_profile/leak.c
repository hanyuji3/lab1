#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p = malloc(10 * sizeof(int));
    for (int i = 0; i < 10; i++) p[i] = i;
    printf("p[3]=%d\n", p[3]);
    free(p);
    return 0;
}
