#include <stdio.h>

int main() {
    char a = 'z';
    void* pointA = &a;

    char g = *(char*)a;

    return 0;
}