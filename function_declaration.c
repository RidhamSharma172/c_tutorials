#include <stdio.h>

// FUNCTION DECLARATION
float calciusToFarenheit(float);

int main() {
    float tempratureInFarenheit = calciusToFarenheit(50);

    printf("%f", tempratureInFarenheit);

    return 0;
}

float calciusToFarenheit(float C) {
    return (9 / 5) * C + 32;
}