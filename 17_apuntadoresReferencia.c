#include <stdio.h>

/* apuntadores pasados por referencia */

/*llamada por valor*/
// int cubo(int n);
// int main(int argc, char const *argv[])
// {
//     int num = 5;
//     printf("pasar el valor al cubo %i\n", num);

//     num = cubo(num);

//     printf("el nuevo valor %i\n", num);

//     return 0;
// }

// int cubo(int n)
// {
//     return n * n * n;
// }

// llamada por referencia 
void cubo(int *n);
int main(int argc, char const *argv[])
{
    int num = 5;
    printf("pasar el valor al cubo %i\n", num);

    cubo(&num);

    printf("el nuevo valor %i\n", num);

    return 0;
}

void cubo(int *n)
{
    *n = *n * *n * *n;
}