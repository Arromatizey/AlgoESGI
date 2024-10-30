#include <stdio.h>

//complexity O(n)
int find_max(int arr[], int n) {
    int max_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
        }
    }
    return max_value;
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
    char text[] = "hello";
    reverse_string(text);
    printf("Reversed string: %s\n", text);
    return 0;
}
