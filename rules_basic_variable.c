#include "stdio.h"

int a;

void foo(int *a) {
    a = a + 1; // acessa ponteiro
}

void main(void) {
    int b = 0;

    while (1) {
        foo(&a);

        if (a > 5) {
            b = 1;
        }
    }
}
