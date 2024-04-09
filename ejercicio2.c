#include <stdio.h>

int main(int argc, char const *argv[])
{

    //codigo
    int numero, antecesor;
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    antecesor = numero - 1;

    printf("El antecesor de %d es %d\n", numero, antecesor);

    return 0;
}

