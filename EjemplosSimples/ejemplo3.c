#include <stdio.h>

int contar_caracteres(char *str) {
    int contador = 0;
    while (*str != '\0') {
        contador++;
        str++;
    }
    return contador;
}

int main() {
    char cadena[] = "Hola, Mundo!";
    int longitud = contar_caracteres(cadena);
    printf("La longitud de la cadena es: %d\n", longitud);
    
    return 0;
}
