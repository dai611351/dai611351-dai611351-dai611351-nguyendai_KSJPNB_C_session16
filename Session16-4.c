#include <stdio.h>

void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Phan tu thu %d: %d\n", i, *(arr + i));
    }
}

int main() {
    int array[] = {1, 3, 5, 7, 9, 11};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Cac phan tu trong mang la:\n");
    printArray(array, size);

    return 0;
}

