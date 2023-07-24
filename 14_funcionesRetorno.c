#include <stdio.h>

int suma();    
int main(int argc, char const *argv[])
{                        
    int num1;
    int num2;

    printf("ingresa el primer valor");
    scanf("%i",&num1);
    printf("ingresa el segundo valor");
    scanf("%i\n",&num2);

    printf("el resultado es: %i\n",suma(num1,num2));
    return 0;
}

int suma(int num1,int num2){

    int suma = num1 + num2;
    return suma;
}