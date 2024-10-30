#include <stdio.h>

int recherche_dichotomique(int arr[], int gauche, int droite, int valeur) {

    while (gauche <= droite) {
        int milieu = gauche + (droite - gauche) / 2;

        // Si l'élément est trouvé au milieu
        if (arr[milieu] == valeur) {
            return milieu; // Retourne l'indice où l'élément est trouvé
        }
        // Si l'élément est plus petit, ignorer la partie droite
        else if (arr[milieu] > valeur) {
            droite = milieu - 1;
        }
        // Si l'élément est plus grand, ignorer la partie gauche
        else {
            gauche = milieu + 1;
        }
    }
    return -1; // Retourne -1 si l'élément n'est pas trouvé
}

int recherche_dichotomique_recursive(int arr[], int gauche, int droite,  int valeur) {

    if (gauche > droite) {
        return -1; // L'élément n'est pas trouvé
    }

    int milieu = gauche + (droite - gauche) / 2;

    // Si l'élément est trouvé au milieu
    if (arr[milieu] == valeur) {
        return milieu;
    }
    // Si l'élément est plus petit que le milieu, chercher dans la moitié gauche
    else if (arr[milieu] > valeur) {
        return recherche_dichotomique_recursive(arr, gauche, milieu - 1, valeur);
    }
    // Si l'élément est plus grand que le milieu, chercher dans la moitié droite
    else {
        return recherche_dichotomique_recursive(arr, milieu + 1, droite, valeur);
    }
}

int main() {
    int tableau[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int valeur = 7;

    int gauche = 0;
    int droite = taille - 1;

    int resultat = recherche_dichotomique(tableau, gauche, droite, valeur);

    if (resultat != -1) {
        printf("Element trouve %d a l'indice %d\n", valeur, resultat);
    } else {
        printf("Element non trouve dans le tableau\n");
    }

    return 0;
}
