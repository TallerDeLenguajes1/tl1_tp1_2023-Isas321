#include <stdio.h>

// a) Funcion que devuelve el cuadrado de un numero
int cuadrado(int x){
    return x*x;
}

// b) Funcion que realiza el cuadrado de un numero aplicando puntero
void cuadradoVoid(int *x){
    *x = *x * *x;
}


// d) Funcion que invierte los valores de entrada
void Invertir(int *a, int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

// e) Funcion Ordenar de menor a mayor
void orden(int *a, int *b){
    if(*a>*b){
        Invertir(&*a, &*b);
    }
    
}


int main(){
int x;

//Ejercicios 4. a)b)c)
printf("\n***** CUADRADO DE UN VALOR USANDO FUNCIONES Y PROCEDIMIENTOS *****\n");
printf("Ingrese numero entero: ");
scanf("%d", &x);
getchar();
printf("\nValor de variable: %d; \nAlmacenada en la direccion: %p\n\n", x, &x);
printf("Valor de variable al cuadrado: %d\n", cuadrado(x));
cuadradoVoid(&x);
printf("Valor de variable al cuadrado usando puntero: %d\n", x);
printf("\nValor actual de la variable: %d; \nAlmacenada en la direccion: %p\n", x, &x);


//Ejercicio d)
int a, b;
printf("\n\n***** INVERSION DE VALORES *****\n");
printf("\nIngrese primer numero entero: ");
scanf("%d", &a);
getchar();

printf("\nIngrese segundo numero entero: ");
scanf("%d", &b);
getchar();

printf("\nValores originales: a=%d y b=%d", a, b);
Invertir(&a, &b);
printf("\nValores intercambiados: a=%d y b=%d\n", a, b);


//Ejercicio e)
printf("\n\n***** ORDEN DE VALORES *****\n");
printf("\nIngrese primer numero entero: ");
scanf("%d", &a);
getchar();

printf("\nIngrese segundo numero entero: ");
scanf("%d", &b);
getchar();

printf("\nValores originales: a=%d y b=%d", a, b);
orden(&a, &b);
printf("\nValores ordenados: a=%d y b=%d\n", a, b);



}