#include <stdio.h>

int factoriel(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factoriel(n - 1);
    }
}

// Fonction récursive pour calculer la somme des éléments d'un tableau
int sommeElementsRec(int tableau[], int taille) {
    if (taille <= 0) {
        return 0;
    } else {
        return tableau[taille - 1] + sommeElementsRec(tableau, taille - 1);
    }
}

// Recherche binaire récursive
int rechercheBinaireRec(int tableau[], int debut, int fin, int element) {
    if (debut > fin) {
        return -1; // Retourne -1 si l'élément n'est pas trouvé
    }
    int milieu = debut + (fin - debut) / 2;
    if (tableau[milieu] == element) {
        return milieu; // Retourne l'index de l'élément trouvé
    } else if (tableau[milieu] < element) {
        return rechercheBinaireRec(tableau, milieu + 1, fin, element);
    } else {
        return rechercheBinaireRec(tableau, debut, milieu - 1, element);
    }
}

int main() {
    int nombre = 5;
    printf("Factoriel de %d: %d\n", nombre, factoriel(nombre));

    // Test de la somme des éléments récursive
    int tableau[] = {1, 2, 3, 4, 5};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    printf("Somme des éléments: %d\n", sommeElementsRec(tableau, taille));

    // Test de la recherche binaire récursive
    int elementRecherche = 4;
    int resultat = rechercheBinaireRec(tableau, 0, taille - 1, elementRecherche);
    if (resultat != -1) {
        printf("Recherche binaire récursive: élément trouvé à l'index %d\n", resultat);
    } else {
        printf("Recherche binaire récursive: élément non trouvé\n");
    }

    return 0;
}
