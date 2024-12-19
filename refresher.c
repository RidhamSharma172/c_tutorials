#include <stdio.h>

int main () {
    // AND OPERATOR &&

    // int age = 15;

    // if (age >= 18) {
    //     printf("You can vote");
    // }
    // else if (age >= 13 && age <= 17) {
    //     printf("Badi jawaani chadi hai bhadwe");
    // } 
    // else {
    //     printf("You cannot vote");
    // }

    // OR OPERATOR ||

    // int age = 12;

    // if (age == 12 || age == 18 || age == 10) {
    //     printf("Nice lunch baby girl");
    // }

    // PRACTICE

    // Sorry for the brain rot
    printf("Enter your health dude: ");
    int health;
    scanf("%d", &health);

    if (health <= 0) {
        printf("You're already cooked.");
    } else if (health > 0 && health <= 20) {
        printf("You're about to be cooked.");
    } else if (health >= 21 && health <= 40) {
        printf("You'll be cooked if you don't show your gyatts ASAP.");
    } else if (health >= 41 && health <= 60) {
        printf("You're an beta.");
    } else if (health >= 61 && health <= 80) {
        printf("You're an alpha.");
    } else if (health >= 81 && health <= 100) {
        printf("You're an sigma.");
    } else {
        printf("This nigga hackin Dude.");
    }

    return 0;
}