#include <stdio.h>

int main(int argc, char const *argv[])
{

    // int arr_enteros[10] = {0,1,2,3,4,5,6,7,8,9};
    // printf("%i\n",arr_enteros[0]);

    int tamano;

    printf("tamaño del arreglo\n");
    scanf("%i",&tamano);

    int edades[tamano];

    for (int i = 0; i < tamano; i++)
    {
        printf("ingresa el valor %i\n",i+1);
        scanf("%i",&edades[i]);
    }

    printf("los valores del arreglo son: \n");

    for (int i = 0; i < tamano; i++)
    {
        printf("los valores son %i\n",edades[i]);
    }
    

    return 0;
}
