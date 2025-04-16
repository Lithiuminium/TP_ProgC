#include <stdio.h>

int main() {
    int num1, num2, resultat;
    char op;

    puts("Entrez le premier nombre : ");
    scanf("%d", &num1);

    puts("Entrez le deuxième nombre : ");
    scanf("%d", &num2);

    printf("Entrez l'opérateur (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            resultat = num1 + num2;
            break;
        case '-':
            resultat = num1 - num2;
            break;
        case '*':
            resultat = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultat = num1 / num2;
            else {
                printf("Division par zéro\n");
                return 1;
            }
            break;
        case '%':
            if (num2 != 0)
                resultat = num1 % num2;
            else {
                printf("Modulo par zéro\n");
                return 1;
            }
            break;
        case '&':
            resultat = num1 & num2;
            break;
        case '|':
            resultat = num1 | num2;
            break;
        case '~':
            resultat = ~num1;
            break;
        default:
            printf("Opérateur invalide\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);

    return 0;
}
