#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 0;
    while (num <= 7)
    {
        num++;
        // if( num == 2) break;
        if(num == 2) continue;
        printf("el valor del numer: %i\n",num);
    }
    
    return 0;
}
