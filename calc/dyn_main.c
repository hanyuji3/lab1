#include <stdio.h>
#include <dlfcn.h>

int main() {
    void *h = dlopen("./libcalc.so", RTLD_LAZY);
    if (!h) {
        printf("load error\n");
        return 1;
    }

    int (*add)(int, int) = dlsym(h, "add");
    int (*sub)(int, int) = dlsym(h, "subtract");
    int (*mul)(int, int) = dlsym(h, "multiply");
    double (*div)(int, int) = dlsym(h, "divide");

    printf("add: %d\n", add(12, 4));
    printf("subtract: %d\n", sub(12, 4));
    printf("multiply: %d\n", mul(12, 4));
    printf("divide: %.2f\n", div(12, 4));

    dlclose(h);
    return 0;
}
