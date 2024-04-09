#include <stdio.h>
#include <math.h> 

int main(int argc, char const *argv[])
{
    int x; 
    int y; 
    
    printf("Bienvenido\n"); 
    printf("Escriba un numero: "); 
    scanf( "%i",&x ); 
    x = pow(x,4);
    printf("\n El numero elevado a la cuarta potencia es: %i", x); 
    printf("\n Escriba un numero: "); 
    scanf( "%i",&y ); 
    y = pow(y,2);
    printf("\n El segundo numero elevado a cuadrado es: %i", y);





    
    return 0;
}
