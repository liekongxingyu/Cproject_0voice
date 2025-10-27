#include <stdio.h>

int main() {
    int a = 10;
    int *b = &a;
    int *c = b;
    printf("Value of a: %p\n", c);
    return 0;
}