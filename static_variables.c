#include <stdio.h>

// STATIC VARIABLES

int incrementalNumber() {
    static int a = 0;
    return ++a;
}

int main() {

    for (int i = 0; i < 10; i++ ) {
        printf("%d\n", incrementalNumber());
    }

    return 0;
}