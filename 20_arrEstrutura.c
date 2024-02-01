#include <stdio.h>
struct perro
{
    char nombre[30];
    int edad;
    float peso;
}
perro1[3];
int main(int argc, char const *argv[])
{
    for (int i = 0; i < 3; ++i)
    {
        printf("%i ingresa el nombre del perro",i+1);
        scanf("%s\n",&perro1[i].nombre);
        // printf("%i ingresa la edad del perro",i+1);
        // scanf("%i\n",&perro1[i].edad);
        // printf("%i ingresa el peso del perro",i+1);
        // scanf("%.2f\n",&perro1[i].peso);
    }

    for (int i = 0; i < 3;++i)
    {
        printf("%i El nombre de los perros son: %s\n",i+1,perro1[i].nombre);
        // printf("%i La edad de los perros son: %s\n",i+1,perro1[i].edad);
        // printf("%i El peso de los perros son: %s\n",i+1,perro1[i].peso);
    }
    
    
    return 0;
}
