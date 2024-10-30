#include <stdio.h>
#include <stdlib.h>

// Prototypes des fonctions
void mergeSort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);

// Fonction principale pour trier un tableau arr[] de taille l à r avec Merge Sort
// Complexity O(n log(n))
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Trouver le point milieu pour diviser le tableau en deux moitiés
        int m = l + (r - l) / 2;

        // Trier récursivement les deux moitiés
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        // Fusionner les deux moitiés triées
        merge(arr, l, m, r);
    }
}

// Fonction pour fusionner deux sous-tableaux de arr[]
// Premier sous-tableau est arr[l..m]
// Deuxième sous-tableau est arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    // Créer des tableaux temporaires
    int L[n1], R[n2];

    // Copier les données dans les tableaux temporaires L[] et R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Fusionner les tableaux temporaires dans arr[l..r]
    i = 0; // Index initial du premier sous-tableau
    j = 0; // Index initial du second sous-tableau
    k = l; // Index initial du sous-tableau fusionné
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copier les éléments restants de L[], s'il y en a
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copier les éléments restants de R[], s'il y en a
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Fonction utilitaire pour imprimer un tableau de taille n
void printArray(int A[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", A[i]);
    printf("\n");
}

// Fonction principale pour tester le tri par fusion
int main() {
    int arr[] = {12, 11, 13, 5, 6, 7};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Tableau donné : \n");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\nTableau trié : \n");
    printArray(arr, arr_size);
    return 0;
}