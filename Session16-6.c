#include <stdio.h>

int search(int *arr, int size, int value) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == value) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6, 7};
    int value = 7;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = search(arr, size, value);
    printf("%d\n", result);

    return 0;
}

