#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];
    int i = 0, j = 0, longueur = 0;

    while (str1[longueur] != '\0') {
        longueur++;
    }

    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0';

    i = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }

    j = 0;
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';

    printf("Longueur de str1 : %d\n", longueur);
    printf("Copie de str1 : %s\n", copie);
    printf("Concaténation : %s\n", concat);

    return 0;
}
