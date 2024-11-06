#include <stdio.h>

void intercambiar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarBurbuja(int *arr, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                intercambiar(arr + j, arr + j + 1);
            }
        }
    }
}

void imprimirArreglo(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arreglo[] = {34, 2, 9, 77, 23};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original: ");
    imprimirArreglo(arreglo, n);

    ordenarBurbuja(arreglo, n);

    printf("Arreglo ordenado: ");
    imprimirArreglo(arreglo, n);

    return 0;
}
