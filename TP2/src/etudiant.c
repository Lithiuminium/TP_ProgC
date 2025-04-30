#include <stdio.h>

int main() {
    char noms[5][50] = {"Dupont", "Lemoine", "Nguyen", "Boulanger", "Moreau"};
    char prenoms[5][50] = {"Alice", "Marc", "Linh", "Julie", "Hugo"};
    char adresses[5][100] = {
        "12 rue Victor Hugo",
        "45 avenue de la République",
        "3 boulevard Haussmann",
        "28 rue des Lilas",
        "17 chemin des Érables"
    };
    float note_prog[5] = {14.5, 11.0, 17.5, 12.0, 15.0};
    float note_sys[5] = {13.0, 10.5, 18.0, 14.0, 13.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note en Programmation en C : %.1f\n", note_prog[i]);
        printf("Note en Système d'exploitation : %.1f\n", note_sys[i]);
        printf("\n");
    }

    return 0;
}
