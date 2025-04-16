#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    int addition = a + b;
    int soustraction = a - b;
    int multiplication = a * b;
    int division = a / b;
    int modulo = a % b;
    int egal = (a == b);
    int superieur = (a > b);

    printf("Addition      : %d\n", addition);
    printf("Soustraction  : %d\n", soustraction);
    printf("Multiplication: %d\n", multiplication);
    printf("Division      : %d\n", division);
    printf("Modulo        : %d\n", modulo);
    printf("a == b        : %d\n", egal);
    printf("a > b         : %d\n", superieur);

    return 0;
}
