#include <stdio.h>

void doblar_valor(int *x) {
    *x = *x * 2;
}

int main() {
    int numero = 10;
    printf("Antes de doblar: %d\n", numero);
    
    doblar_valor(&numero);
    
    printf("Después de doblar: %d\n", numero);
    
    return 0;
}
