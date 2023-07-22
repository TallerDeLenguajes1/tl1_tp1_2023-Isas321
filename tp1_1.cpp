#include <stdio.h>

int main(){
    int *puntero, variable=1; //Los punteros se declaran siempre con un * por delante
    //La variable tiene el valor 1
    printf("\nhola mundo\n");

    puntero = &variable;    // Aqui el puntero guarda la direccion de la variable, es decir en donde se guardo 1
    //la direccion es de 8 digitos hexadecimales, es decir 8*4=32bits que es la celda en donde se guarda  
    printf("\nEl contenido del puntero es: %d \n", *puntero);
    // El puntero sin * guarda una direccion
    // cuando ponemos el asterisco estamos convocando al valor apuntado, es decir al valor que tiene 
    // como direccion la almacenada por el puntero sin asterisco
    printf("La direccion almacenada por el puntero es: %p\n", puntero);
    printf("La direccion de memoria de la variable es: %p\n", &variable);
    printf("La direccion de memoria del puntero es: %p\n", &puntero);
    printf("Tamanio de memoria utilizado por la variable es: %d\n", sizeof(variable)); //Como es una variable tipo entero ocupara 4 de almacenamiento
    // Notar que el tamaño de la variable se corresponde con la diferencias de direccion entre &variable y &puntero
    // son 4 bits y es justo la diferencia que hay entre una direccion y otra, es decir que estan almacenadas consegutivamente
    //estan siguiendo un orden
    return 0;
}
