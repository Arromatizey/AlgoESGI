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


//complexity O(n)
void reverse_string(char str[]) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
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

//complexité O(n);
