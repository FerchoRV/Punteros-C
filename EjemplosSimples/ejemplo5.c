#include <stdio.h>

int encontrar_maximo(int *arr, int n) {
    int max = *arr;  // Inicializar el máximo con el primer elemento del arreglo
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arreglo[] = {3, 9, 7, 5, 12, 1};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    
    int max = encontrar_maximo(arreglo, n);
    printf("El valor máximo en el arreglo es: %d\n", max);
    
    return 0;
}
