#include <stdio.h>
#include <string.h>

typedef struct Persona {
    char nombre[50];
    int edad;
    float salario;
} Persona;

// Función para modificar los valores de una persona
void actualizarPersona(Persona *p) {
    printf("Ingresa el nuevo nombre: ");
    scanf("%s", p->nombre);

    printf("Ingresa la nueva edad: ");
    scanf("%d", &(p->edad));

    printf("Ingresa el nuevo salario: ");
    scanf("%f", &(p->salario));
}

void imprimirPersona(Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Salario: %.2f\n", p.salario);
}

int main() {
    Persona p = {"Juan", 30, 2500.50};

    printf("Datos iniciales de la persona:\n");
    imprimirPersona(p);

    actualizarPersona(&p);  // Usamos un puntero para modificar directamente la estructura

    printf("\nDatos actualizados de la persona:\n");
    imprimirPersona(p);

    return 0;
}
