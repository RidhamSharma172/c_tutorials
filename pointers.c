#include <stdio.h>

// void swap(int* a, int* b) {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void swap(int* c, int* d) {
    int temp = *c;
    *c = *d;
    *d = temp;
}

int main() {
    // int a = 12;
    // int* pointer = &a;

    // printf("address of variable a is %p\n", pointer);

    int a = 12;
    int b = 13;

    printf("originally a is %d and b is %d\n", a, b);

    swap(&a, &b);

    printf("a is %d and b is %d", a, b);

    return 0;
}