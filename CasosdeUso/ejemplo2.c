#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo
typedef struct Nodo {
    int dato;
    struct Nodo *siguiente;
} Nodo;

// Función para agregar un nodo al final de la lista
void agregarNodo(Nodo **cabeza, int valor) {
    Nodo *nuevoNodo = (Nodo*)malloc(sizeof(Nodo));
    nuevoNodo->dato = valor;
    nuevoNodo->siguiente = NULL;

    if (*cabeza == NULL) {
        *cabeza = nuevoNodo;
    } else {
        Nodo *temp = *cabeza;
        while (temp->siguiente != NULL) {
            temp = temp->siguiente;
        }
        temp->siguiente = nuevoNodo;
    }
}

// Función para imprimir la lista
void imprimirLista(Nodo *cabeza) {
    Nodo *temp = cabeza;
    while (temp != NULL) {
        printf("%d -> ", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

// Liberar memoria de la lista
void liberarLista(Nodo *cabeza) {
    Nodo *temp;
    while (cabeza != NULL) {
        temp = cabeza;
        cabeza = cabeza->siguiente;
        free(temp);
    }
}

int main() {
    Nodo *cabeza = NULL;  // Lista inicialmente vacía

    int n, valor;
    printf("¿Cuántos elementos deseas insertar en la lista? ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingresa el valor del nodo %d: ", i + 1);
        scanf("%d", &valor);
        agregarNodo(&cabeza, valor);
    }

    printf("Los elementos de la lista son: ");
    imprimirLista(cabeza);

    // Liberar la memoria de la lista
    liberarLista(cabeza);

    return 0;
}
