#include <stdio.h>

size_t getsize(float *ptr);
/* oprerador size of determina el tamaño en bytes de un arreglo*/
int main(int argc, char const *argv[])
{
    float arr[20];

    printf("El numero en bytes de un arreglo es: %lu\n",sizeof(arr));
    printf("El numero en bytes devueltos de getsieze es:  %lu\n",getsize(arr));

    return 0;
}

size_t getsize(float *ptr)
{
    return sizeof(ptr);
}