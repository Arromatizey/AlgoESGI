#include <stdio.h>

// Fonction récursive pour calculer la factorielle
int factoriel(int n) {
    if (n <= 1) {
        return 1; // Cas de base : 0! = 1 et 1! = 1
    } else {
        return n * factoriel(n - 1); // Appel récursif
    }
}

int main() {
    int nombre;

    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);
    printf("La factorielle de %d est %d\n", nombre, factoriel(nombre));

    return 0;
}

//complexity O(n)
