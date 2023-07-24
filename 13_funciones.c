#include <stdio.h>

void saludo(){
    printf("hola humdo funicona z   AA");
    return;
}
int suma();

int main(int argc, char const *argv[])
{
    /* code */
    saludo();
    printf("%i\n",suma());
    return 0;
}

int suma(){
    int num1 = 10;
    int num2 = 10;
    int res = num1 + num2;

    return res;
}