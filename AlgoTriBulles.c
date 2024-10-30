#include <stdio.h>

// Fonction pour échanger deux éléments
void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// Fonction pour effectuer le tri à bulles
// Complexity O(n^2)
void bubbleSort(int arr[], int n) {
    int i, j;
    int swapped;
    for (i = 0; i < n-1; i++) {
        swapped = 0;
        // Parcourir le tableau de 0 à n-i-1
        // Les derniers i éléments sont déjà en place
        for (j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(&arr[j], &arr[j+1]);
                swapped = 1;
            }
        }

        // Si aucun élément n'a été échangé, alors le tableau est déjà trié
        if (swapped == 0)
            break;
    }
}

// Fonction pour afficher le tableau
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Programme principal pour tester le tri à bulles
int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Tableau original :\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("Tableau trié :\n");
    printArray(arr, n);
    return 0;
}
