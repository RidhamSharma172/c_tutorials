#include <stdio.h>

int main() {
    // ## shit practice

    // int* pointer;
    // printf("%d", *pointer);

    // this is better
    int* pointer = NULL;
    printf("%d", *pointer); // crashes the program as it was intended to

    return 0;
}