#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Bienvenido...\n");
    printf("Dime el precio de un producto y te dare 15%% de descuento...\n");

    float total, producto = 0;
    float descuento = 0.15;
    
    scanf("%f", &producto);
    total = producto - (producto * descuento);

    printf("Precio original: %.2f", producto);
    printf("\n");
    printf("Precio con descuento: %.2f", total);
    printf("\n");

    return 0;
}
