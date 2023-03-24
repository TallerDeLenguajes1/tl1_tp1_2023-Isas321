#include <stdio.h>

int main(){
    int *puntero, variable=1;

    printf("\nhola mundo\n");

    puntero = &variable;
    printf("\nEl contenido del puntero es: %d \n", *puntero);
    printf("La direccion almacenada por el puntero es: %p\n", puntero);
    printf("La direccion de memoria de la variable es: %p\n", &variable);
    printf("La direccion de memoria del puntero es: %p\n", &puntero);
    printf("Tamanio de memoria utilizado por la variable es: %d\n", sizeof(variable)); //Como es una variable tipo entero ocupara 4 de almacenamiento

    return 0;
}
