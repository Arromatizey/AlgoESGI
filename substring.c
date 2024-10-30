#include <stdio.h>
#include <string.h>

// Fonction qui retourne l'indice de la première occurrence de la sous-chaîne,
// ou -1 si la sous-chaîne n'est pas trouvée.
int trouver_sous_chaine(const char *chaine, const char *sous_chaine) {
    char *pos = strstr(chaine, sous_chaine);  // Recherche la sous-chaîne

    if (pos != NULL) {
        return pos - chaine;  // Calcule l'indice en soustrayant les pointeurs
    }
    return -1;  // Sous-chaîne non trouvée
}

int main() {
    char chaine[100], sous_chaine[100];

    // Demande à l'utilisateur d'entrer la chaîne principale
    printf("Entrez la chaîne principale : ");
    fgets(chaine, sizeof(chaine), stdin);

    // Supprime le caractère de nouvelle ligne si présent
    if (chaine[strlen(chaine) - 1] == '\n') {
        chaine[strlen(chaine) - 1] = '\0';
    }

    // Demande à l'utilisateur d'entrer la sous-chaîne à rechercher
    printf("Entrez la sous-chaîne à rechercher : ");
    fgets(sous_chaine, sizeof(sous_chaine), stdin);

    // Supprime le caractère de nouvelle ligne si présent
    if (sous_chaine[strlen(sous_chaine) - 1] == '\n') {
        sous_chaine[strlen(sous_chaine) - 1] = '\0';
    }

    // Recherche la sous-chaîne dans la chaîne principale
    int indice = trouver_sous_chaine(chaine, sous_chaine);

    // Affiche le résultat de la recherche
    if (indice != -1) {
        printf("Sous-chaîne trouvée à l'indice : %d\n", 1 + indice);
    } else {
        printf("Sous-chaîne non trouvée.\n");
    }

    return 0;
}