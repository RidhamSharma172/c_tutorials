#include <stdio.h>
#include <string.h>

// HOW TO MAKE A FUNCTION

// return__data_type identifier() {
    // code
// }

void printsMultiplicationTable(int n) {

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }

}

int printsFuturePlans() {
    printf("KITTU WEDS ASHUUU\n");
    return 26;
}

void printsHelloWorld() {
    printf("Hello, World");
}


// int factorial(int num)
// {
//     if (num > 0)
//     {
//         return num * factorial(num - 1);
//     }
//     else
//     {
//         return 1;
//     }
// }

// float areaOfRectangle(float, float);

// float areaOfCircle(float radius) {
//     return (float)(22.0 / 7.0) * radius * radius;
// }

// void thisFunc() {
//     areaOfRectangle(20, 20); // we can call functions inside other functions
//     printf("YOOO NIGGA\n");
// }

// float areaOfRectangle(float width, float height) {
//     return width * height;
// }

int main()
{
    // thisFunc();
    // float area = areaOfCircle(10);
    // printf("%f\n", area);

    // area = areaOfRectangle(10, 20);
    // printf("%f\n", area);

    // printf("%d", factorial(5));
    int n = 6;
    printsMultiplicationTable(5);
    // printsMultiplicationTable(n);

    int age = printsFuturePlans();
    printf("%d\n",age);

    printsMultiplicationTable( printsFuturePlans() );
    return 0;
}