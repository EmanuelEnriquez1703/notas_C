#include <stdio.h>

int main(){
    int num1;
    int num2;
    int res;

    printf("ingrese el numuero1\n");
    scanf("%d",&num1);

    printf("ingrese el numero2\n");
    scanf("%d",&num2);

    res = num1 + num2;

    printf("el resultado es: %d\n",res);
    
    return 0;

}