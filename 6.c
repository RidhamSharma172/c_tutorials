#include <stdio.h>

int main() {
    int var;
    var = 12;

    int arr[] = {1, 23, 53};
    int a[2];
    a[0] = 12;
    a[1] = 14;

    a[0] = 8923;

    for (int i = 0; i < 2; i++) {
        printf("%d\n", a[i]);
    }
    

    return 0;
}