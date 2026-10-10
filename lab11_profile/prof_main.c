#include <stdio.h>
#include "calc.h"

int main() {
    long sum = 0;
    double d = 0;
    for (int i = 1; i <= 50000000; i++) {
        sum += add(i, 1);
        sum += subtract(i, 1);
        sum += multiply(i % 100, 2);
        d += divide(i, 7);
    }
    printf("sum=%ld d=%.2f\n", sum, d);
    return 0;
}
