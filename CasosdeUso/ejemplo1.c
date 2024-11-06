#include <stdio.h>
#include <stdlib.h>  // Para malloc y free

int main() {
    int n;
    
    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &n);

    // Asignación dinámica de memoria
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;  // Salir si malloc falla
    }

    // Ingresar valores en el arreglo
    printf("Ingresa %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", arr + i);  // Usando puntero para acceder
    }

    // Calcular la suma
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += *(arr + i);
    }

    printf("La suma de los elementos es: %d\n", suma);

    // Liberar la memoria dinámica
    free(arr);

    return 0;
}
