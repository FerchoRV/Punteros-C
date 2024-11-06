#include <stdio.h>

int sumar_arreglo(int *arr, int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(arr + i);  // O también: suma += arr[i];
    }
    return suma;
}

int main() {
    int arreglo[] = {1, 2, 3, 4, 5};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);
    
    int resultado = sumar_arreglo(arreglo, n);
    printf("La suma de los elementos del arreglo es: %d\n", resultado);
    
    return 0;
}
