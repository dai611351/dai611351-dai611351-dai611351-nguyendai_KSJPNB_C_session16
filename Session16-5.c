#include <stdio.h>

void update(int *arr, int newValue, int position) {
    arr[position] = newValue;
}

int main() {
    int array[] = {3, 5, 7, 9, 11};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Mang truoc khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    update(array, 13, 2); 

    printf("Mang sau khi cap nhat:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

