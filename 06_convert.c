#include <stdio.h>
/*palabras reservadas y conversion de tipos de datos*/
int main(int argc, char const *argv[])
{
    // int a = 23;
    // int a = 80; es la P en codigo aski
    int a = 80;
    float f = 23.321;
    float suma = (float)a + f;
    printf("la suma es: %f\n",suma);
    printf("entero%i\n flotante%.2f\n double%.3f\n caracter%c\n",a,(float)a,(double)a,(char)a);
    return 0;
}
