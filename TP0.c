#include <stdio.h>


//complexity O(n)
int sum_recursive(int arr[], int n) {
    if (n <= 0) {
        return 0;
    }
    return arr[n - 1] + sum_recursive(arr, n - 1);
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    printf("Sum of elements: %d\n", sum_recursive(array, size));
    return 0;
}
