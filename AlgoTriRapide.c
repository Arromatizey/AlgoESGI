#include <stdio.h>

// Fonction pour échanger deux éléments
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Cette fonction prend le dernier élément comme pivot, place
// le pivot à sa position correcte dans le tableau trié, et
// place tous les éléments plus petits (plus petits que le pivot)
// à gauche du pivot et tous les éléments plus grands à droite du pivot
int partition(int arr[], int low, int high) {
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index du plus petit élément

    for (int j = low; j <= high - 1; j++) {
        // Si l'élément courant est plus petit que le pivot
        if (arr[j] < pivot) {
            i++;    // incrémente l'index du plus petit élément
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// La fonction principale qui implémente le QuickSort
// arr[] --> Tableau à trier,
// low --> Index de début,
// high --> Index de fin
// Complexity O(n log(n))
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // pi est l'index de partitionnement, arr[p] est maintenant
        // à la bonne place
        int pi = partition(arr, low, high);

        // Trie séparément les éléments avant
        // la partition et après la partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Fonction utilitaire pour afficher le tableau
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Fonction principale pour tester le code ci-dessus
int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    quickSort(arr, 0, n - 1);
    printf("Tableau trié: \n");
    printArray(arr, n);
    return 0;
}