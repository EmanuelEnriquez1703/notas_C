
#include <stdio.h>

/*
    apuntadores en C
    son variables cuyo valores son direcciones de memoria
    un apuntador contiene la direccion de una variable que contiene un valor espeficico
*/
int main(int argc, char const *argv[])
{
    int a = 2;
    int *apt = &a;

    // printf("%i",*apt);
    printf("%p\n",apt); // muestra en espacio en memoria tipo exadecimal

    return 0;
}
