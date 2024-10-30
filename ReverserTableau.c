#include <stdio.h>

// Définition d'une fonction pour renverser un tableau
void renverserTableau(int tableau[], int taille) {
    int *tab = tableau;
    int *fin = tableau + taille - 1;

    while (tab < fin) {
        // Echange les éléments du début et de la fin du tableau
        int temp = *tab;
        *tab = *fin;
        *fin = temp;
        // Avancement des pointeurs
        tab++;
        fin--;
    }
}

int main() {
    int tableau[] = {1, 2, 16, 52, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    printf("Tableau avant : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    renverserTableau(tableau, taille);

    printf("Tableau après : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    return 0;
}