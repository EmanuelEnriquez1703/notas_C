
#include <stdio.h>
struct perro
{
    char nombre[30];
    int edad;
    float peso;
}
perro1 ={"Toni",5,16.2},
perro2 ={"ternera",3,10.00};



/*una estructura es una collecion de uno o mas tipos de elementos*/
int main(int argc, char const *argv[])
{
    printf("el peso es: %s es %.2f y tiene %i meses \n",perro1.nombre,perro1.peso,perro1.edad);
    return 0;
}
