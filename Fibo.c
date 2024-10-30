#include <stdio.h>


//complexity O(n)
void afficherFibonacci(int n) {
    unsigned long long first = 0, second = 1, next;

    printf("Séquence de Fibonacci :\n");

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;  // Les deux premiers termes sont 0 et 1
        } else {
            next = first + second;  // Calcule le terme suivant
            first = second;  // Met à jour le premier terme
            second = next;   // Met à jour le deuxième terme
        }
        printf("%llu ", next);  // Affiche le terme
    }

    printf("\n");
}

int main() {
    int n;

    // Demande à l'utilisateur combien de termes afficher
    printf("Entrez le nombre de termes de la séquence de Fibonacci à afficher : ");
    scanf("%d", &n);

    // Appel de la fonction pour afficher la séquence de Fibonacci
    afficherFibonacci(n);

    return 0;
}