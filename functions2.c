#include <stdio.h>
#include <math.h>

// MORE FUNCTION EXAMPLES

float getHypot(float perpendicular, float base) {
    return sqrt(base * base + perpendicular * perpendicular);
}

float getDist(float x1, float y1, float x2, float y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int checkEvenOdd(int n) {
    if (n % 2) {
        printf("Number is odd");
        return 1;
    } else {
        printf("Number is even");
        return 0;
    }
}

// int checkEvenOdd2(int n) {
//     if (n == 1) {
//         printf("Number is odd");
//         return 1;
//     } else if (n == 2) {
//         printf("Number is even");
//         return 0;
//     }
//     // and so on....
// }

int main()
{
    
    printf("%f\n", getHypot(10, 10));
    printf("%f\n", getDist(0, 0, 1, 1));

    return 0;
}
