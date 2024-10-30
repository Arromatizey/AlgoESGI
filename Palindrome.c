#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Fonction pour vérifier si un mot est un palindrome
bool estPalindrome(const char *mot) {
    int debut = 0;
    int fin = strlen(mot) - 1;

    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false;
        }
        debut++;
        fin--;
    }
    return true;
}

int main() {
    char mot[100];

    printf("Entrez un mot : ");
    scanf("%s", mot);

    if (estPalindrome(mot)) {
        printf("Le mot '%s' est un palindrome.\n", mot);
    } else {
        printf("Le mot '%s' n'est pas un palindrome.\n", mot);
    }

    return 0;
}
