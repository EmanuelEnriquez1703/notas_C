#include <stdio.h>

int main(int argc, char const *argv[])
{
    int caso;
    printf("ingrese un numero\n");
    scanf("%i",&caso);
    switch (caso)
    {
    case 1:
        printf("el numero ingresado es: 1");
        break;
    case 2:
        printf("el numero ingresado es: 2");
        break;
    case 3:
        printf("el numero ingresado es: 3");
        break;
    default:
    printf("el numero ingresado no esta en ninguno de los casos");
        break;
    }    

    return 0;
}
