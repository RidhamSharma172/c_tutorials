#include <stdio.h>

float calciusToFarenheit(float C) {
    return (9 / 5) * C + 32;
}

int main () {

    printf("%f", calciusToFarenheit(10.3));
    return 0;
}