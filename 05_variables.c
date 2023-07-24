#include <stdio.h>

int main(){
    
    char letra = 'a'; // tamaño 1 byte 0...255
    printf("%c\n",letra);
    
    int numero = 20; // 2 byte -32768 ... 32767
    printf("%i\n",numero);

    short sho = -1; // 2 bytes -128...127
    printf("%i\n",sho);

    unsigned int numero_unsigned =25; // 2 bytes 0...65535
    printf("%i\n",numero_unsigned);
    
    long numero_long = 5523; //4 bytes -2147483648...2147483647
    printf("%li\n",numero_long);

    float numero_float = 5.2212; // 4 bytes
    printf("%.2f\n",numero_float);

    double numero_double = 5212.2212; // 8 bytes 
    printf("%.lf\n",numero_double);

}