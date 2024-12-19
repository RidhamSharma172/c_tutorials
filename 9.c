#include <stdio.h>
#include <string.h>

int main () {
    char helloWorld[12] = "Hello";
    char world[] = "World";

    strcat(helloWorld, world);

    printf(helloWorld);

    return 0;
}