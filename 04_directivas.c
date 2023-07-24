/* Directivas del pre-procesador*/
#include <stdio.h> // va a buscar en la biblioteca estandar
// #include "nombre del archivo " // va a buscar en la misma carpeta
#define PI 3.14 // crear constate simbolicas y macros
#define CUBO(a) a*a*a

int main(){ 
    // int suma;
    // suma = PI + 3;

    // printf("la suma es: %d\n",suma);

    int a = 3;
    printf("el cubo de la variable a: %d\n",CUBO(a));

    return 0;
}