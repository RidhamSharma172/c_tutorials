#include <stdio.h>

int main() {
    printf("Enter your age: ");
    unsigned short int age;
    scanf("%d", &age);

    if (age >= 18) {
        if (age >= 100) printf("You're too old to drive!");
        else printf("You can drive.");
    } else if (age <= 5) {
        printf("Chhota bheem dekh!");
    } else {
        printf("You cannot drive yet");
    }

    return 0;
}