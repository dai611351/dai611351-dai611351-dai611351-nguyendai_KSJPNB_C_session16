#include <stdio.h>

void calculateSum(int a, int b, int *result) {
    *result = a + b; 
}

int main() {
    
    int num1 = 10, num2 = 20;
    int result; 
    calculateSum(num1, num2, &result);
    printf("Tong cua %d và %d la: %d\n", num1, num2, result);

    return 0;
}

