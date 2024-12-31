#include <stdio.h>

int A = 81293; // global scope

int main() {
    int a = 15; // local scope
    if (1) {
        int a = 12;
        printf("%d", a);
    }


    return 0;
}