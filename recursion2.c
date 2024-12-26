#include <stdio.h>

// FACTORIAL 
// ## USING ITERATION ##

// int factorial(int n) {
//     int factorial = 1;

//     for (int i = n; i > 0; i--)
//     {
//         factorial *= i;
//     }
    
//     return factorial;
// }

// ## USING RECURSION ##
int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int a = 5;

    printf("factorial of %d is %d", a, factorial(a));

    return 0;
}