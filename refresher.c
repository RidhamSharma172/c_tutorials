#include <stdio.h>

int main () {
    int age = 15;

    if (age >= 18) {
        printf("You can vote");
    }
    else if (age >= 13 && age <= 17) {
        printf("Badi jawaani chadi hai bhadwe");
    } 
    else {
        printf("You cannot vote");
    }

    return 0;
}