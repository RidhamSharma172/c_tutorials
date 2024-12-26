#include <stdio.h>

void func() {
    printf("Hello\n");

    func();
}

int main() {

    int a = 12;
    int b = 13;
    int c = 14;

    func();

    return 0;
}